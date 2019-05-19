/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/29 13:56:00 by ffoissey          #+#    #+#             */
/*   Updated: 2018/08/29 18:08:07 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_comb(void)
{
	char	tab[3];
	int		i;

	tab[0] = '0';
	while (tab[0] <= '7')
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= '8')
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= '9')
			{
				i = 0;
				while (i < 3)
					ft_putchar(tab[i++]);
				if (tab[0] == '7' && tab[2] == '9')
					return ;
				tab[2]++;
				ft_putchar(',');
				ft_putchar(' ');
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
