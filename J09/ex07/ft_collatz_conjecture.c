/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 00:00:36 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 01:03:41 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1 || base == 0)
		return (0);
	if (base % 2)
		return (1 + ft_collatz_conjecture(base * 3 + 1));
	return (1 + ft_collatz_conjecture(base / 2));
}
