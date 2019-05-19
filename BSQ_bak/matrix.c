/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/18 11:18:54 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/19 00:16:59 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		fill_matrix(int *matrix, char *map, t_data *data)
{
	int	i;
	int	max;
	int	ok;

	i = 0;
	ok = 0;
	max = data->nbr_line * data->x;
	while (i < max)
	{
		if (map[i] == '\n')
			matrix[i] = -1;
		else if (map[i] == data->empty)
		{
			ok = 1;
			matrix[i] = 1;
		}
		else
			matrix[i] = 0;
		i++;
	}
	return (ok);
}

void	operate_matrix(int *matrix, t_data *data)
{
	int	i;
	int max;
	int	bsq;

	i = data->x;
	max = data->nbr_line * data->x;
	while (i < max)
	{
		if (matrix[i] != -1 && matrix[i - 1] != -1 && matrix[i] != 0)
		{
			bsq = square_matrix(matrix, i, data);
			if (bsq > data->bsq)
			{
				data->bsq = bsq;
				data->max_pos = i;
				data->pos = i - ((bsq - 1) * data->x) - (bsq - 1);
			}
		}
		i++;
	}
	if (data->bsq > 1)
		fill_square(matrix, data);
}

int		square_matrix(int *matrix, int i, t_data *data)
{
	int		prev_case;
	int		up_case;
	int		angle_case;
	int		min;

	prev_case = matrix[i - 1];
	up_case = matrix[i - data->x];
	angle_case = matrix[i - data->x - 1];
	if (prev_case <= up_case && prev_case <= angle_case)
		min = prev_case;
	else if (up_case <= prev_case && up_case <= angle_case)
		min = up_case;
	else
		min = angle_case;
	matrix[i] = min + 1;
	return (min + 1);
}

void	fill_square(int *matrix, t_data *data)
{
	int		x_max;
	int		tmp;

	x_max = data->pos + data->bsq - 1;
	tmp = data->pos;
	while (tmp <= data->max_pos)
	{
		matrix[tmp] = data->bsq + 1;
		if (tmp == x_max)
		{
			tmp += data->x - data->bsq + 1;
			x_max += data->x;
		}
		else
			tmp++;
	}
}

void	print_matrix(int *matrix, t_data *data)
{
	int	i;
	int	max;

	i = 0;
	max = data->nbr_line * data->x;
	while (i < max)
	{
		if (data->bsq == 1 && matrix[i] == 1)
		{
			ft_putchar(data->full);
			data->bsq = 2;
		}
		else if (matrix[i] == 0)
			ft_putchar(data->block);
		else if (matrix[i] == -1)
			ft_putchar('\n');
		else if (matrix[i] > data->bsq)
			ft_putchar(data->full);
		else
			ft_putchar(data->empty);
		i++;
	}
}
