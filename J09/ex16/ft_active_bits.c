/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 14:15:16 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 14:41:18 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_binary(int value, unsigned int *count)
{
	if (value < 2)
	{
		if (value % 2 == 1)
			(*count)++;
		return (value % 2);
	}
	else
	{
		if (value % 2 == 1)
			(*count)++;
	}
	return (value % 2 + ft_binary(value / 2, count) * 10);
}

unsigned int	ft_active_bits(int value)
{
	unsigned int	count;

	count = 0;
	value = ft_binary(value, &count);
	return (count);
}
