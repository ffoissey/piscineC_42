/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 11:53:58 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/10 21:06:05 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		resolve_sudoku(int tab[9][9], int init_nbr, int index, char **argv)
{
	int		line;
	int		column;
	int		nbr;
	int		count;

	count = 0;
	nbr = init_nbr;
	line = index / 9;
	column = index % 9;
	if (index == 81)
		return (0);
	if (tab[line][column])
		return (resolve_sudoku(tab, init_nbr, index + 1, argv));
	while (++count <= 9)
	{
		if (!check_case(tab, line, column, nbr))
		{
			system("clear");
			print_sudoku(tab, argv);
			tab[line][column] = nbr;
			if (!resolve_sudoku(tab, init_nbr, index + 1, argv))
				return (0);
		}
		init_nbr == 1 ? nbr++ : nbr--;
	}
	tab[line][column] = 0;
	return (1);
}

int		check_case(int tab[9][9], int line, int column, int nbr)
{
	return (check_line(tab, line, column, nbr)
			|| check_column(tab, line, column, nbr)
			|| check_square(tab, line, column, nbr));
}

int		check_line(int tab[9][9], int line, int column, int nbr)
{
	int		tmp_line;

	tmp_line = 0;
	while (tmp_line < 9)
	{
		if (tab[tmp_line][column] == nbr && tmp_line != line)
			return (1);
		tmp_line++;
	}
	return (0);
}

int		check_column(int tab[9][9], int line, int column, int nbr)
{
	int		tmp_column;

	tmp_column = 0;
	while (tmp_column < 9)
	{
		if (tab[line][tmp_column] == nbr && tmp_column != column)
			return (1);
		tmp_column++;
	}
	return (0);
}

int		check_square(int tab[9][9], int line, int column, int nbr)
{
	int		tmp_line;
	int		tmp_column;

	tmp_line = (line - line % 3);
	tmp_column = (column - column % 3);
	line = tmp_line + 3;
	column = tmp_column + 3;
	while (tmp_line < line)
	{
		tmp_column = column - 3;
		while (tmp_column < column)
		{
			if (tab[tmp_line][tmp_column] == nbr
				&& tmp_column != column && tmp_line != line)
				return (1);
			tmp_column++;
		}
		tmp_line++;
	}
	return (0);
}
