/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:52:59 by ffoissey          #+#    #+#             */
/*   Updated: 2018/08/31 10:10:31 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_find_next_prime(int nb)
{
	int		base;

	if (nb < 2)
		return (2);
	while (1)
	{
		base = 2;
		while (base < nb)
		{
			if (nb % base == 0)
				base = nb;
			base++;
		}
		if (base == nb)
			return (nb);
		nb++;
	}
}
