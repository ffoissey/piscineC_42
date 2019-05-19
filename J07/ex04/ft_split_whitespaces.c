/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 10:28:06 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/05 18:09:44 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcpy(char *src, char *dest)
{
	int		i;

	i = 0;
	while (src[i] && (src[i] != '\n' && src[i] != '\t' && src[i] != ' '))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_fill_tab(char **tab_str, char *str, int index, char *current_word)
{
	int		count_letters;
	char	*tmp_str;

	count_letters = 1;
	while (*str)
	{
		while (*(str + 1) == '\n' || *(str + 1) == '\t' || *(str + 1) == ' ')
			str++;
		if (*str == '\n' || *str == '\t' || *str == ' ')
		{
			if (!(tmp_str = (char *)malloc((count_letters + 1) * sizeof(char))))
				return (1);
			tab_str[index++] = ft_strcpy(current_word, tmp_str);
			count_letters = 1;
			current_word = 1 + str++;
		}
		count_letters++;
		str++;
	}
	if (*(str - 1) == '\t' || *(str - 1) == '\t' || *(str - 1) == ' ')
		return (0);
	if (!(tmp_str = (char *)malloc((count_letters) * sizeof(char))))
		return (1);
	tab_str[index] = ft_strcpy(current_word, tmp_str);
	return (0);
}

char	**ft_split_whitespaces(char *str)
{
	int		count_words;
	int		i;
	char	**tab;

	i = -1;
	if (!(*str))
		return (NULL);
	count_words = 1;
	while (*str == '\n' || *str == '\t' || *str == ' ')
		str++;
	while (str[++i])
	{
		while (str[i + 1] == '\n' || str[i + 1] == '\t' || str[i + 1] == ' ')
			i++;
		if ((str[i] == '\n' || str[i] == '\t' || str[i] == ' ') || !(str[i]))
			count_words++;
	}
	if (str[i - 1] == '\t' || str[i - 1] == '\t' || str[i - 1] == ' ' || !str)
		count_words--;
	if (!(tab = (char **)malloc((count_words + 1) * sizeof(char *))) || !str)
		return (NULL);
	if (ft_fill_tab(tab, str, 0, str))
		return (NULL);
	tab[count_words] = NULL;
	return (tab);
}
