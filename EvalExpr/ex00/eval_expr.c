/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 21:47:33 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/17 17:20:02 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		eval_expr(char *str)
{
	int		result;
	char	*cp_str;
	int		pos;
	int		minus;

	pos = 0;
	result = 0;
	minus = 0;
	if (str[0] == '-')
		minus = 1;
	if (!(cp_str = (char *)malloc(sizeof(char) * (ft_strlen(str) + 1 + minus))))
		return (0);
	cp_str = ft_rm_space(str, cp_str);
	result = ft_low(cp_str, &pos);
	free(cp_str);
	return (result);
}

int		ft_getnbr(char *str, int *i)
{
	int		nbr;

	if ((str[*i] >= '0' && str[*i] <= '9') || str[*i] == '-')
	{
		nbr = ft_atoi(str + *i);
		if (str[*i] == '-')
			(*i)++;
		while (str[*i] >= '0' && str[*i] <= '9')
			(*i)++;
		return (nbr);
	}
	else if (str[*i] == '(')
	{
		(*i)++;
		nbr = ft_low(str, i);
		(*i)++;
		return (nbr);
	}
	return (0);
}

int		ft_high(char *str, int *i)
{
	int		nbr1;

	nbr1 = ft_getnbr(str, i);
	while (str[*i] == '*' || str[*i] == '/' || str[*i] == '%')
	{
		if (str[*i] == '*')
		{
			(*i)++;
			nbr1 *= ft_getnbr(str, i);
		}
		else if (str[*i] == '/')
		{
			(*i)++;
			nbr1 /= ft_getnbr(str, i);
		}
		else
		{
			(*i)++;
			nbr1 %= ft_getnbr(str, i);
		}
	}
	return (nbr1);
}

int		ft_low(char *str, int *i)
{
	int		nbr1;

	nbr1 = ft_high(str, i);
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '+')
		{
			(*i)++;
			nbr1 += ft_high(str, i);
		}
		else
		{
			(*i)++;
			nbr1 -= ft_high(str, i);
		}
	}
	return (nbr1);
}
