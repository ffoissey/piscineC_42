/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initial.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 15:31:32 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/09 21:22:26 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIAL_H
# define INITIAL_H

int		check_size(char **argv);
int		check_same_nbr(char **argv);
void	fill_tab(int tab[9][9], int tab2[9][9], char **argv);
int		comp_tab(int tab[9][9], int tab2[9][9]);
int		verification(int tab[9][9]);

#endif
