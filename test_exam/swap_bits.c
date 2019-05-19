/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 16:47:10 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/14 16:54:48 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	prints_bits(unsigned char octet)
{
	int		i;
	char	tab[9];
	char	tab_sw[9];
	
	i = 0;
	octet -= '0';
	while (i < 8)
	{
		tab[i] = octet % 2 + '0';
		octet /= 2;
		i++;	
	}
	tab[i] = '\0';
	i--;	
	while (i >= 0)
		ft_putchar(tab[i--]);
	j = 0;
	i = 3;
	while (j < 4)
	{
		tab_sw[j] = tab[i];
		i++;
		j++;
	}
	j = 3;
	i = 0;
	while (i < 4)
	{
		tab_sw[j] = tab[i];
		i++;
		j++;
	}
	
	
}

int		main(int ac, char **av)
{	
	prints_bits((unsigned char)av[1][0]);
	return (0);
}

