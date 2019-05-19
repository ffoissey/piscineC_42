/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 12:16:16 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/05 14:02:38 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_strcpy(char *src, char *dest)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

int		ft_strlen(char *str)
{
	int		i;

	i = 1;
	while (str[i])
		i++;
	return (i + 1);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	if (!(new_str = (char *)malloc(ft_strlen(src) * sizeof(char))))
		return (NULL);
	ft_strcpy(src, new_str);
	return (new_str);
}
