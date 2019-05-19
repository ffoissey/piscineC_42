/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/01 10:36:44 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/01 23:49:22 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_char(int nb, char c)
{
	while (nb > 0)
	{
		ft_putchar(c);
		nb--;
	}
}

int		print_door(int star, int size, int tmp_l, int door)
{
	int		tmp_star;
	int		tmp_door;

	tmp_star = -1;
	tmp_door = door - 1;
	star = star - door;
	while (++tmp_star < (star / 2))
		ft_putchar('*');
	while (--door >= 0)
	{
		if ((tmp_l >= 2 && (size % 2 == 1)) || (tmp_l >= 3 && (size % 2 == 0)))
		{
			if (!((door - 1 && size % 2 == 1) || ((door - 2) && size % 2 == 0))
					&& (size + 4 - tmp_l - (size % 2)) == tmp_l && size > 4)
				ft_putchar('$');
			else if (size % 2 == 0 && (door == (size - size % 2) || door == 0))
				ft_putchar('*');
			else
				ft_putchar('|');
		}
		else
			ft_putchar('*');
	}
	return (tmp_star);
}

void	print_step(int size, int tmp_size, int *star, int *space)
{
	int		tmp_line;
	int		tmp_star;
	int		door;

	tmp_line = tmp_size + 2;
	door = size - (size % 2) + 1;
	while (tmp_line)
	{
		print_char(*space, ' ');
		ft_putchar('/');
		if (tmp_size == size)
		{
			tmp_star = print_door(*star, size, tmp_size + 2 - tmp_line, door);
			while (++tmp_star <= ((*star) - door))
				ft_putchar('*');
		}
		else
			print_char(*star, '*');
		ft_putchar('\\');
		ft_putchar('\n');
		(*star) += 2;
		(*space)--;
		tmp_line--;
	}
}

int		width(int size)
{
	if (!size)
		return (size);
	else
		return ((size + 2) + ((size / 2) + (size % 2) * 2) + width(size - 1));
}

void	sastantua(int size)
{
	int		tmp_size;
	int		star;
	int		space;

	if (size <= 0)
		return ;
	tmp_size = 1;
	star = -1;
	space = width(size) - (size % 2) - 1;
	while (tmp_size <= size)
	{
		star = star + ((tmp_size / 2)) * 2 + 2;
		space = space - (tmp_size / 2) - 1;
		print_step(size, tmp_size, &star, &space);
		tmp_size++;
	}
}
