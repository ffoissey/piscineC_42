/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 14:44:05 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/04 19:24:53 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_tab(int min, int max)
{
	int		count;

	count = 0;
	while (max > min)
	{
		count++;
		max--;
	}
	return (count);
}

int		*ft_range(int min, int max)
{
	int		*tab;
	int		nb_value;

	if (min >= max)
		return (NULL);
	nb_value = ft_count_tab(min, max);
	if (!(tab = (int *)malloc(nb_value * sizeof(int))))
		return (NULL);
	while (nb_value)
	{
		tab[nb_value - 1] = (max - 1);
		max--;
		nb_value--;
	}
	return (tab);
}
