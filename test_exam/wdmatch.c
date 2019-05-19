/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/14 15:05:58 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/14 15:42:34 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_check_char(char *str1, char *str2)
{
	int		i;
	int		j;

	i = 0;
	while (str1[i])
	{
		while (str2[j] && str2[j] != str1[i])
			j++;
		if (!str2[j] && str1[i])
			return ;
		i++;
	}
	while (*str1)
		ft_putchar(*str1++);
}

int		main(int ac, char **av)
{
	if (ac == 3)
		ft_check_char(av[1], av[2]);
	ft_putchar('\n');
	return (0);
}
