/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 00:26:36 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/10 21:06:55 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initial.h"
#include "sudoku.h"
#include "print.h"

int		main(int argc, char **argv)
{
	int		tab[9][9];
	int		tab2[9][9];
	int		index;

	index = 0;
	if (argc != 10 || check_size(argv) || check_same_nbr(argv))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	fill_tab(tab, tab2, argv + 1);
	if (resolve_sudoku(tab, 1, index, argv + 1))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	resolve_sudoku(tab2, 9, index, argv + 1);
	if (comp_tab(tab, tab2) || verification(tab))
	{
		write(2, "Error\n", 6);
		return (1);
	}
	return (0);
}
