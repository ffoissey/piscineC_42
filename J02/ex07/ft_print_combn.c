/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 17:56:07 by ffoissey          #+#    #+#             */
/*   Updated: 2018/08/29 19:57:07 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_combn(int n)
{
	int		tab_max[9];
	int		tab[9];
	int		pow;
	int		i;
	int		nbr;

	i = 0;
	nbr = 9;
	while (n)
	{
		tab[i++] = nbr--;
		n--;
	}
	pow = i - 1;
	while (tab[0] <= tab_max[0] && tab[9 - pow] <= tab_max[9 - pow])
	{
		ft_putchar(tab[i--] + '0');
	}
}

int		main(void)
{
	ft_print_combn(4);
	return (0);
}
