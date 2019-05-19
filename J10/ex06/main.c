/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/11 21:49:05 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/12 14:14:16 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "calculator.h"
#include "io.h"

int		check(char **argv, int *sign)
{
	if (ft_atoi(argv[2]) == 0 && (argv[1][0] == '/' || argv[1][0] == '%'))
		return (1);
	else if (argv[1][0] == '+')
		*sign = 0;
	else if (argv[1][0] == '-')
		*sign = 1;
	else if (argv[1][0] == '*')
		*sign = 2;
	else if (argv[1][0] == '/')
		*sign = 3;
	else if (argv[1][0] == '%')
		*sign = 4;
	else
	{
		ft_putstr("0\n");
		return (1);
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int		sign;
	int		result;
	int		(*f[5])(int, int);

	f[0] = &ft_add;
	f[1] = &ft_minus;
	f[2] = &ft_mul;
	f[3] = &ft_div;
	f[4] = &ft_mod;
	if (argc != 4)
		return (1);
	if (check(argv + 1, &sign))
	{
		if (argv[2][0] == '/')
			ft_putstr("Stop : division by zero\n");
		else if (argv[2][0] == '%')
			ft_putstr("Stop : modulo by zero\n");
		return (1);
	}
	ft_putnbr((f[sign](ft_atoi(argv[1]), ft_atoi(argv[3]))));
	ft_putchar('\n');
	return (0);
}
