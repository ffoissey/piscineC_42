/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 10:29:24 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/02 10:50:26 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_line(char sign1, char sign2, int x)
{
	ft_putchar(sign1);
	while (x > 1)
	{
		if (x > 2)
			ft_putchar(sign2);
		else
			ft_putchar(sign1);
		x--;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x <= 0 || y <= 0)
		return ;
	ft_print_line('A', 'B', x);
	while (y > 1)
	{
		if (y > 2)
			ft_print_line('B', ' ', x);
		else
			ft_print_line('C', 'B', x);
		y--;
	}
}
