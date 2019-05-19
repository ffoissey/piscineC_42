/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:56:32 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/19 20:15:40 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		bsq(char *map, int fd)
{
	char	*first_line;
	t_data	*data;
	char	*tmp_map;
	int		*matrix;

	matrix = NULL;
	tmp_map = NULL;
	first_line = NULL;
	data = NULL;
	if (!(map = ft_read(map, fd)))
		return (clear_all(first_line, matrix, data, tmp_map));
	if (!(first_line = ft_get_first_line(map)))
		return (clear_all(first_line, matrix, data, tmp_map));
	tmp_map = map;
	while ((*map) != '\n')
		map++;
	map++;
	if (!(data = ft_check_map(first_line, map)))
		return (clear_all(first_line, matrix, data, tmp_map));
	if (!(matrix = (int *)malloc(sizeof(int) * (data->x * data->nbr_line))))
		return (clear_all(first_line, matrix, data, tmp_map));
	if (fill_matrix(matrix, map, data))
		operate_matrix(matrix, data);
	print_matrix(matrix, data);
	return (clear_all(first_line, matrix, data, tmp_map));
}

int		clear_all(char *first_line, int *matrix, t_data *data, char *map)
{
	int	ok;

	ok = 0;
	if (first_line)
	{
		ok++;
		free(first_line);
	}
	if (matrix)
	{
		ok++;
		free(matrix);
	}
	if (data)
	{
		ok++;
		free(data);
	}
	if (map)
	{
		ok++;
		free(map);
	}
	return (ok == 4 ? TRUE : FALSE);
}

char	*ft_get_first_line(char *map)
{
	char	*first_line;
	int		i;

	i = 0;
	while (map[i] != '\n' && map[i])
		i++;
	if (!(map[i]))
		return (NULL);
	if (!(first_line = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	ft_strncpy(map, first_line, i);
	return (first_line);
}

t_data	*ft_check_map(char *first_line, char *map)
{
	t_data	*data;
	int		i;

	if ((i = ft_strlen(first_line)) < 3)
		return (NULL);
	if (!(data = (t_data *)malloc(sizeof(t_data))))
		return (NULL);
	data->empty = first_line[i - 3];
	data->block = first_line[i - 2];
	data->full = first_line[i - 1];
	if (data->full == data->empty || data->empty == data->block
		|| data->full == data->block)
	{
		free(data);
		return (NULL);
	}
	data->bsq = 1;
	first_line[i - 3] = '\0';
	if (!(data->nbr_line = ft_atoi(first_line))
		|| !(ft_check_line_char(data, map)))
	{
		free(data);
		return (NULL);
	}
	return (data);
}

int		ft_check_line_char(t_data *data, char *map)
{
	int		count;
	int		line;
	int		i;

	count = 0;
	line = 0;
	i = 0;
	if (!(map[count]))
		return (FALSE);
	while (map[count] != '\n' && map[count])
		count++;
	if ((data->x = count + 1) <= 1 || !(map[count]))
		return (FALSE);
	while (line < data->nbr_line)
	{
		while (map[i] != '\n' && map[i])
			if (map[i++] != data->empty && map[i - 1] != data->block)
				return (FALSE);
		if (++i != ((count + 1) * ++line))
			return (FALSE);
	}
	if (map[i - 1] == '\0')
		return (FALSE);
	return (map[i] ? FALSE : TRUE);
}
