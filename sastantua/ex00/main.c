/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 17:57:44 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/01 21:38:43 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_atoi(char *str);
void	sastantua(int size);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	sastantua(ft_atoi(argv[1]));
	return (0);
}

int		ft_atoi(char *str)
{
	int		nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (str[i])
	{
		if ((str[i] == '-' || str[i] == '+') && i == 0)
			i++;
		if ((str[i] < '0' || str[i] > '9') && str[0] == '-')
			return (-nbr);
		else if (str[i] < '0' || str[i] > '9')
			return (nbr);
		nbr = str[i++] - '0' + nbr * 10;
	}
	if (str[0] == '-')
		return (-nbr);
	return (nbr);
}
