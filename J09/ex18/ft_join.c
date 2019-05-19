/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:52:25 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 15:13:42 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_len(char **tab)
{
	int		i;
	int		j;
	int		count;

	count = 0;
	i = 0;
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
			j++;
		count = count + j;
		i++;
	}
	return (count + 1);
}

char	*ft_join(char **tab, char *sep)
{
	int		i;

	i = 0;
	sep = (char *)malloc(sizeof(char) * ft_len(tab));
	while (*tab)
	{
		while (**tab)
		{
			sep[i] = **tab;
			(*tab)++;
			i++;
		}
		tab++;
	}
	sep[i] = '\0';
	return (sep);
}
