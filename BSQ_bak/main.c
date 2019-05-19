/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 14:10:14 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/19 18:14:14 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int ac, char **av)
{
	char	*map;

	map = NULL;
	if (ac == 1)
	{
		if (!bsq(map, 0))
			ft_putstr(ERROR, 2);
	}
	else
		all_arg(ac - 1, av + 1, map);
	return (0);
}

void	all_arg(int ac, char **av, char *map)
{
	int		i;
	int		fd;

	i = 0;
	while (i < ac)
	{
		if ((fd = open(av[i], O_RDONLY)) != -1)
		{
			if (!bsq(map, fd))
				ft_putstr(ERROR, 2);
		}
		else
			ft_putstr(ERROR, 2);
		i++;
		close(fd);
		if (i != ac)
			ft_putstr("\n", 1);
	}
}
