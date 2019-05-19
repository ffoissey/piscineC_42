/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:10:16 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/05 18:18:01 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	int		i;

	i = 0;
	while (s1[i])
	{
		if (s1[i] < s2[i])
			return (s1[i] - s2[i]);
		else if (s1[i] > s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_sort_params(char **str, int argc)
{
	int		i;
	int		j;
	char	*tmp_ptr;

	i = 0;
	tmp_ptr = str[i];
	while (i < argc)
	{
		j = i;
		while (j < argc)
		{
			if (ft_strcmp(str[i], str[j]) > 0)
			{
				tmp_ptr = str[i];
				str[i] = str[j];
				str[j] = tmp_ptr;
			}
			j++;
		}
		i++;
	}
}

int		main(int argc, char *argv[])
{
	int		i;

	i = 1;
	if (argc == 1)
		return (1);
	ft_sort_params(argv + 1, argc - 1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
