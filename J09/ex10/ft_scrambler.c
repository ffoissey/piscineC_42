/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:03:06 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 10:11:34 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int		tmp_a;
	int		tmp_b;
	int		tmp_c;
	int		tmp_d;

	tmp_a = ***a;
	tmp_b = *b;
	tmp_c = *******c;
	tmp_d = ****d;
	*******c = tmp_a;
	****d = tmp_c;
	*b = tmp_d;
	***a = tmp_b;
}
