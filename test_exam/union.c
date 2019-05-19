/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 14:21:47 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/14 15:04:23 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_char1(char *str1)
{
	int		i;
	int		j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str1[j] && str1[j] != str1[i])
			j++;
		if (i == j || str1[j] == '\0')
			ft_putchar(str1[i]);
		i++;
	}
}

void	ft_check_char2(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	while (str2[i])
	{
		j = 0;
		while (str2[j] && str2[j] != str2[i])
			j++;
		if (i == j || str2[j] == '\0')
		{
			j = 0;
			while (str1[j] && str1[j] != str2[i])
				j++;
			if (!str1[j])
				ft_putchar(str2[i]);
		}
		i++;
	}
}

int		main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_check_char1(av[1]);
		ft_check_char2(av[1], av[2]);
	}
	ft_putchar('\n');
	return (0);
}
