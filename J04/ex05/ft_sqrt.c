/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 18:43:45 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/06 00:07:47 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int		base;
	int		tmp;

	base = -1;
	if (nb > 2147395600 || nb < 0)
		return (0);
	else if (nb <= 1000)
	{
		while (++base <= nb)
		{
			if (base * base == nb)
				return (base);
		}
		return (0);
	}
	if (nb > 100000 && nb <= 1000000)
		tmp = nb / 100;	
	else 
		tmp = nb / 1000;
	while (++base <= tmp)
	{
		if (base * base == nb)
			return (base);
	}
	return (0);
}
