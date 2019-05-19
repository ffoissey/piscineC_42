/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:33:29 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/10 21:06:19 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

#include <stdlib.h>

void	print_sudoku(int tab[9][9], char **argv);
int		resolve_sudoku(int tab[9][9], int init_nbr, int index, char **argv);
int		check_column(int tab[9][9], int line, int column, int nbr);
int		check_line(int tab[9][9], int line, int column, int nbr);
int		check_square(int tab[9][9], int line, int column, int nbr);
int		check_case(int tab[9][9], int line, int column, int nbr);

#endif
