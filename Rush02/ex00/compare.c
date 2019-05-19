/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   compare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:26:52 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/15 20:12:47 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

int		ft_compare(int x, int y, char *map)
{
	char	*rush;
	int		ok;

	ok = 0;
	if (!(rush = (char *)malloc(sizeof(char) * (x * y + y + 1))))
		return (0);
	if (ft_check(rush00(x, y, rush), map))
	{
		ft_print_result(0, x, y);
		ok++;
	}
	else if (ft_check(rush01(x, y, rush), map))
	{
		ft_print_result(1, x, y);
		ok++;
	}
	else if (*map == 'A')
	{
		if (check_other_rush(x, y, map, rush))
			ok++;
	}
	free(rush);
	return (ok ? 1 : 0);
}

int		check_other_rush(int x, int y, char *map, char *rush)
{
	int		ok;

	ok = 0;
	if (ft_check(rush02(x, y, rush), map))
	{
		ft_print_result(2, x, y);
		ok++;
	}
	if (ft_check(rush03(x, y, rush), map))
	{
		if (ok)
			ft_putstr(" || ");
		ft_print_result(3, x, y);
		ok++;
	}
	if (ft_check(rush04(x, y, rush), map))
	{
		if (ok)
			ft_putstr(" || ");
		ft_print_result(4, x, y);
		ok++;
	}
	return (ok ? 1 : 0);
}

int		ft_check(char *real, char *cpy)
{
	int		i;

	i = 0;
	while (real[i] || cpy[i])
	{
		if (real[i] != cpy[i])
			return (0);
		i++;
	}
	if (real[i] || cpy[i])
		return (0);
	return (1);
}
