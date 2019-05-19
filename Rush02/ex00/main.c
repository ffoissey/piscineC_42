/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 10:28:02 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/15 20:35:15 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

int		main(void)
{
	char	*map;
	int		x;
	int		y;

	x = 0;
	y = 0;
	map = NULL;
	if (!(map = ft_read(map)))
		ft_putstr("aucune");
	else
	{
		ft_extract_xy(&x, &y, map);
		if (!ft_compare(x, y, map))
			ft_putstr("aucune");
		free(map);
	}
	ft_putchar('\n');
	return (0);
}
