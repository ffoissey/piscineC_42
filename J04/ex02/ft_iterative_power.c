/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 14:52:33 by ffoissey          #+#    #+#             */
/*   Updated: 2018/08/30 15:47:48 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		tmp;

	tmp = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power - 1)
	{
		nb *= tmp;
		power--;
	}
	return (nb);
}
