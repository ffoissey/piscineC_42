/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 17:28:57 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/15 19:49:15 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

char	*rush00(int x, int y, char *rush)
{
	int		i;
	t_sign	first_line;
	t_sign	mid_line;
	t_sign	last_line;

	set_struct('o', '-', 'o', &first_line);
	set_struct('|', ' ', '|', &mid_line);
	set_struct('o', '-', 'o', &last_line);
	i = 0;
	i += ft_get_line(first_line, x, rush + i);
	while (y > 1)
	{
		i++;
		if (y > 2)
			i += ft_get_line(mid_line, x, rush + i);
		else
			i += ft_get_line(last_line, x, rush + i);
		y--;
	}
	rush[i + 1] = '\0';
	return (rush);
}

char	*rush01(int x, int y, char *rush)
{
	int		i;
	t_sign	first_line;
	t_sign	mid_line;
	t_sign	last_line;

	set_struct('/', '*', '\\', &first_line);
	set_struct('*', ' ', '*', &mid_line);
	set_struct('\\', '*', '/', &last_line);
	i = 0;
	i += ft_get_line(first_line, x, rush + i);
	while (y > 1)
	{
		i++;
		if (y > 2)
			i += ft_get_line(mid_line, x, rush + i);
		else
			i += ft_get_line(last_line, x, rush + i);
		y--;
	}
	rush[i + 1] = '\0';
	return (rush);
}

char	*rush02(int x, int y, char *rush)
{
	int		i;
	t_sign	first_line;
	t_sign	mid_line;
	t_sign	last_line;

	set_struct('A', 'B', 'A', &first_line);
	set_struct('B', ' ', 'B', &mid_line);
	set_struct('C', 'B', 'C', &last_line);
	i = 0;
	i += ft_get_line(first_line, x, rush + i);
	while (y > 1)
	{
		i++;
		if (y > 2)
			i += ft_get_line(mid_line, x, rush + i);
		else
			i += ft_get_line(last_line, x, rush + i);
		y--;
	}
	rush[i + 1] = '\0';
	return (rush);
}

char	*rush03(int x, int y, char *rush)
{
	int		i;
	t_sign	first_line;
	t_sign	mid_line;
	t_sign	last_line;

	set_struct('A', 'B', 'C', &first_line);
	set_struct('B', ' ', 'B', &mid_line);
	set_struct('A', 'B', 'C', &last_line);
	i = 0;
	i += ft_get_line(first_line, x, rush + i);
	while (y > 1)
	{
		i++;
		if (y > 2)
			i += ft_get_line(mid_line, x, rush + i);
		else
			i += ft_get_line(last_line, x, rush + i);
		y--;
	}
	rush[i + 1] = '\0';
	return (rush);
}

char	*rush04(int x, int y, char *rush)
{
	int		i;
	t_sign	first_line;
	t_sign	mid_line;
	t_sign	last_line;

	set_struct('A', 'B', 'C', &first_line);
	set_struct('B', ' ', 'B', &mid_line);
	set_struct('C', 'B', 'A', &last_line);
	i = 0;
	i += ft_get_line(first_line, x, rush + i);
	while (y > 1)
	{
		i++;
		if (y > 2)
			i += ft_get_line(mid_line, x, rush + i);
		else
			i += ft_get_line(last_line, x, rush + i);
		y--;
	}
	rush[i + 1] = '\0';
	return (rush);
}
