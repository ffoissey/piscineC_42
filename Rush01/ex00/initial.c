/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:28:41 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/09 21:22:24 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "initial.h"

int		check_size(char **argv)
{
	int		i;
	int		j;
	int		count;

	i = 1;
	count = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (((argv[i][j] <= '0' || argv[i][j] > '9') && argv[i][j] != '.'))
				return (1);
			if (argv[i][j] != '.')
				count++;
			j++;
		}
		if (j != 9)
			return (1);
		i++;
	}
	if (count < 17)
		return (1);
	return (0);
}

int		check_same_nbr(char **argv)
{
	int		i;
	int		j;
	int		k;
	char	tmp;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			tmp = argv[i][j];
			k = 0;
			while (k < j)
			{
				if (tmp == argv[i][k] && tmp != '.')
					return (1);
				k++;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int		verification(int tab[9][9])
{
	int		line;
	int		tmp_line;
	int		column;
	int		tmp;

	column = 0;
	while (column < 9)
	{
		line = 0;
		while (line < 9)
		{
			tmp = tab[line][column];
			tmp_line = 0;
			while (tmp_line < 9)
			{
				if (tmp_line != line && tmp == tab[tmp_line][column])
					return (1);
				tmp_line++;
			}
			line++;
		}
		column++;
	}
	return (0);
}

void	fill_tab(int tab[9][9], int tab2[9][9], char **argv)
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
				tab[i][j] = 0;
			else
				tab[i][j] = argv[i][j] - '0';
			tab2[i][j] = tab[i][j];
			j++;
		}
		i++;
	}
}

int		comp_tab(int tab[9][9], int tab2[9][9])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 9)
	{
		while (j < 9)
		{
			if (tab[i][j] != tab2[i][j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
