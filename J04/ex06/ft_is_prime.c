/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 19:25:28 by ffoissey          #+#    #+#             */
/*   Updated: 2018/08/30 19:38:38 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int		base;

	base = 2;
	if (nb <= 1)
		return (0);
	while (base < nb)
	{
		if (nb % base == 0 && base != 2)
			return (0);
		base++;
	}
	return (1);
}