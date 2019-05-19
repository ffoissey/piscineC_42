/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spy.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 01:30:07 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 02:12:56 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_str(char *str, char *bauer, char *president, char *attack)
{
	int		i;

	i = 0;
	while (str[i] == president[i] && str[i])
		i++;
	if (!(president[i]))
		return (1);
	i = 0;
	while (str[i] == bauer[i] && str[i])
		i++;
	if (!(bauer[i]))
		return (1);
	i = 0;
	while (str[i] == attack[i] && str[i])
		i++;
	if (!(attack[i]))
		return (1);
	return (0);
}

char	*ft_uppercase(char *str)
{
	int		i;

	i = 0;
	while (*str == ' ')
		str++;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		else if (str[i] == ' ')
			str[i] = '\0';
		i++;
	}
	return (str);
}

int		main(int argc, char **argv)
{
	int		i;

	i = 1;
	if (argc < 2)
		return (1);
	while (i < argc)
	{
		if (ft_check_str(ft_uppercase(argv[i]), "BAUER", "PRESIDENT", "ATTACK"))
		{
			write(1, "Alert!!!\n", 9);
			return (0);
		}
		i++;
	}
	return (0);
}
