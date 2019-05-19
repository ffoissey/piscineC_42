/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 00:33:29 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/09 17:03:24 by cservier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "print.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	print_sudoku(int tab[9][9], char **argv)
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (argv[i][j] == '.')
				ft_putstr("\033[032m");
			else
				ft_putstr("\033[031m");
			ft_putchar(tab[i][j] + '0');
			j++;
			if (j != 9)
				ft_putchar(' ');
		}
		i++;
		ft_putchar('\n');
	}
}
