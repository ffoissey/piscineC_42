/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:03:25 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 11:15:43 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_compact(char **tab, int lenght)
{
	int		step;
	int		i;

	step = 0;
	i = 0;
	while (i < (lenght - 1))
	{
		if (!(tab[i]))
		{
			step++;
			tab[i] = tab[i + step];
		}
		i++;
	}
	return (lenght - step);
}
