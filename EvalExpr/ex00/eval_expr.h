/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 22:46:40 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/16 16:15:40 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include "io.h"
# include <stdlib.h>

int		eval_expr(char *str);
int		ft_high(char *str, int *i);
int		ft_low(char *str, int *i);
int		ft_getnbr(char *str, int *i);

#endif
