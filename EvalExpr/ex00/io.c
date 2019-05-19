/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 21:42:43 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/16 16:54:42 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str)
{
	int		nbr;
	int		i;

	nbr = 0;
	i = 0;
	if (str[0] == '-' || str[0] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		nbr = str[i++] - '0' + nbr * 10;
	return (str[0] == '-' ? -nbr : nbr);
}

int		ft_strlen(char *str)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != ' ')
			count++;
		i++;
	}
	return (count);
}

char	*ft_rm_space(char *src, char *dest)
{
	int		i;

	if (*src == '-')
	{
		i = 1;
		dest[0] = '0';
	}
	else
		i = 0;
	while (*src)
	{
		if (*src != ' ')
		{
			dest[i] = *src;
			i++;
		}
		src++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
	else if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
