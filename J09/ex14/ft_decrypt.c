/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decrypt.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 11:20:33 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 16:32:06 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_perso.h"
#include "stdlib.h"

int		ft_count_elem(char *str)
{
	int		i;

	i = 1;
	while (*str)
	{
		if (*str == '|')
			i++;
		str++;
	}
	return (i);
}

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i] != ';' || str[i])
		i++;
	return (i);
}

int		ft_atoi(char *str)
{
	int		nbr;
	int		i;

	nbr = 0;
	i = 0;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	while (str[i] != '|')
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

t_perso	**ft_decrypt(char *str)
{
	t_perso	**tab;
	int		len;
	int		i;
	int		j;

	i = 0;
	len = ft_count_elem(str) + 1;
	tab = (t_perso **)malloc(sizeof(t_perso *) * len + 1);
	while (i < (len - 2))
	{
		tab[i] = (t_perso *)malloc(sizeof(t_perso));
		tab[i]->age = ft_atoi(str);
		while (*str != '|' || *str)
			str++;
		str++;
		if (*str)
			tab[i]->name = (char *)malloc(sizeof(char) * ft_strlen(str + 1));
		j = 0;
		while (*str != ';' || *str)
			tab[i]->name[j++] = *str++;
		str++;
		i++;
	}
	tab[i] = 0;
	return (tab);
}

int		main(void)
{
	ft_decrypt("12|nick bauer;21|moi");
	return (0);
}
