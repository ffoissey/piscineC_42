/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/04 19:27:59 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/04 23:34:25 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_fill(int argc, char **argv, char *str)
{
	int		i;
	int		j;
	int		tmp;

	i = 0;
	tmp = 1;
	while (tmp < argc)
	{
		j = 0;
		while (argv[tmp][j])
		{
			str[i] = argv[tmp][j];
			i++;
			j++;
		}
		if (tmp < (argc - 1))
		{
			str[i] = '\n';
			i++;
		}
		tmp++;
	}
	str[i] = '\0';
}

char	*ft_concat_params(int argc, char **argv)
{
	int		count;
	int		tmp;
	char	*str;

	count = 0;
	tmp = 1;
	while (tmp < argc)
	{
		count += (ft_strlen(argv[tmp]));
		tmp++;
	}
	if (!(str = (char *)malloc((count + argc - 1) * sizeof(char))))
		return (NULL);
	ft_fill(argc, argv, str);
	return (str);
}
