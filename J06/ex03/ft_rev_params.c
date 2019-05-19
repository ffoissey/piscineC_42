/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 20:05:12 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/02 20:08:47 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int argc, char *argv[])
{
	int		i;

	if (argc == 1)
		return (1);
	i = argc - 1;
	while (i)
	{
		ft_putstr(argv[i--]);
		ft_putchar('\n');
	}
	return (0);
}
