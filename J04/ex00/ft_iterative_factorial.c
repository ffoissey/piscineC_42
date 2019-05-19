/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 12:22:45 by ffoissey          #+#    #+#             */
/*   Updated: 2018/08/30 23:49:09 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	if (nb < 0 || nb > 12)
		return (0);
	result = nb;
	if (result == 0)
		return (1);
	while (nb > 1)
		result *= --nb;
	return (result);
}
