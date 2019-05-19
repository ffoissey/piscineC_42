/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   manage_rush.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 19:23:53 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/15 20:13:45 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

int		ft_get_line(t_sign line, int x, char *rush)
{
	int		i;

	i = 0;
	rush[i] = line.s1;
	while (x > 1)
	{
		i++;
		if (x > 2)
			rush[i] = line.s2;
		else
			rush[i] = line.s3;
		x--;
	}
	i++;
	rush[i] = '\n';
	return (i);
}

void	set_struct(char s1, char s2, char s3, t_sign *line)
{
	line->s1 = s1;
	line->s2 = s2;
	line->s3 = s3;
}
