/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   io.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 13:56:15 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/19 18:05:13 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

int		ft_atoi(char *str)
{
	int		nbr;

	nbr = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+')
		str++;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (-1);
		nbr = *str++ - '0' + nbr * 10;
	}
	return (*str ? -1 : nbr);
}

char	*ft_read(char *str, int fd)
{
	int		ret;
	int		count;
	char	buf[BUF_SIZE + 1];
	char	*tmp_str;

	count = 0;
	while ((ret = read(fd, buf, BUF_SIZE)) && ret != -1)
	{
		count = count + ret;
		buf[ret] = '\0';
		if (!(tmp_str = (char *)malloc(sizeof(char) * (count + 1))))
			return (NULL);
		ft_strcpy(buf, tmp_str + (count - ret));
		tmp_str[count] = '\0';
		if (str)
			ft_strcpy(str, tmp_str);
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
