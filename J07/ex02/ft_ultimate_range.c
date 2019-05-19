/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:28:12 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/05 18:48:17 by ffoissey         ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int		nb_value;
	int		tmp;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	nb_value = ft_count_tab(min, max);
	if (!(*range = (int *)malloc(nb_value * sizeof(int))))
		return (0);
	tmp = nb_value;
	while (tmp)
	{
		range[0][tmp - 1] = (max - 1);
		max--;
		tmp--;
	}
	return (nb_value);
}
