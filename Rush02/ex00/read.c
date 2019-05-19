/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:45:38 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/15 20:26:03 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "read.h"

char	*ft_read(char *str)
{
	int		ret;
	int		count;
	char	buf;
	char	*tmp_str;

	count = 0;
	while ((ret = read(0, &buf, 1)) && ret != -1)
	{
		count++;
		if (!(tmp_str = (char *)malloc(sizeof(char) * (count + 1))))
			return (NULL);
		if (str)
			ft_strcpy(str, tmp_str);
		tmp_str[count - 1] = buf;
		tmp_str[count] = '\0';
		if (str)
			free(str);
		if (!(str = (char *)malloc(sizeof(char) * (count + 1))))
			return (NULL);
		ft_strcpy(tmp_str, str);
		str[count] = '\0';
		free(tmp_str);
	}
	return (ret == -1 ? NULL : str);
}

void	ft_strcpy(char *src, char *dest)
{
	int		i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
}

void	ft_extract_xy(int *x, int *y, char *map)
{
	int		i;

	i = 0;
	while (map[i])
	{
		if (map[i] == '\n')
			(*y)++;
		i++;
	}
	(*x) = (i - (*y)) / (*y);
}
