/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 10:26:40 by ffoissey          #+#    #+#             */
/*   Updated: 2018/08/31 23:47:32 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
