/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 17:45:10 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 01:18:08 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

void	ft_exept(int hour)
{
	if (hour == 21)
		ft_putstr("9.00 P.M. AND 10.00 P.M.\n");
	else if (hour == 22)
		ft_putstr("10.00 P.M. AND 11.00 P.M.\n");
	else if (hour == 9)
		ft_putstr("9.00 A.M. AND 10.00 A.M.\n");
	else if (hour == 10)
		ft_putstr("10.00 A.M. AND 11.00 A.M.\n");
}

void	ft_normal_print(int hour)
{
	if (hour < 12)
	{
		ft_putchar((hour % 12) % 12 + '0');
		ft_putstr(".00 A.M. AND ");
		hour++;
		ft_putchar((hour % 12) % 12 + '0');
		ft_putstr(".00 A.M.\n");
	}
	else
	{
		ft_putchar((hour % 12) % 12 + '0');
		ft_putstr(".00 P.M. AND ");
		hour = hour % 12 + 1;
		if (hour % 12)
			ft_putchar(hour % 12 + '0');
		else
			ft_putchar('0');
		ft_putstr(".00 P.M.\n");
	}
}

void	ft_takes_place(int hour)
{
	if (hour > 23 || hour < 0)
		return ;
	ft_putstr("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0 || hour == 24)
		ft_putstr("12.00 A.M. AND 01.00 A.M.\n");
	else if (hour == 11)
		ft_putstr("11.00 A.M. AND 12.00 P.M.\n");
	else if (hour == 23)
		ft_putstr("11.00 P.M. AND 12.00 A.M.\n");
	else if (hour == 12)
		ft_putstr("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour >= 21 || (hour >= 9 && hour <= 11))
		ft_exept(hour);
	else
		ft_normal_print(hour);
}
