/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 15:15:50 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 15:30:49 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int		i;
	int		j;
	int		is_alone;
	int		even;

	i = 0;
	while (i < length)
	{
		is_alone = tab[i];
		j = 0;
		even = 1;
		while (j < length)
		{
			if (is_alone == tab[j] && j != i)
				even++;
			j++;
		}
		if (even % 2)
			return (is_alone);
		i++;
	}
	return (is_alone);
}
