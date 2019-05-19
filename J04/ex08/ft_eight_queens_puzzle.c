/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/30 21:02:01 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/13 14:30:36 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int		ft_is_ok(int board[8][8], int l, int c)
{
	int		tmp_l;
	int		tmp_c;

	tmp_l = 0;
	tmp_c = 0;
	while (tmp_l < 8)
	{
		if (board[tmp_l][c] && board[tmp_l][c] != board[l][c])
			return (1);
		tmp_l++;
	}
	while (tmp_c < 8)
	{
		if (board[l][tmp_c] && board[l][tmp_c] != board[l][c])
			return (1);
		tmp_c++;
	}
	tmp_l = 0;
	while (tmp_l < 8)
	{
		tmp_c = 0;
		while (tmp_c < 8)
		{
			if (board[tmp_l][tmp_c] && board[tmp_l][tmp_c] != board[l][c] && (l - c) == (tmp_l - tmp_c))
				return (1);
			tmp_c++;
		}
		tmp_l++;
	}
	return (0);
}

int        ft_solve_puzzle(int board[8][8], int index, int *nb_comb)
{	
	int	c;
	int	l;
	int	place;

	place = 0;
    if (index == 64)
    	return (1);
	while (place < 64)
	{
		while (board[l][c])
			place++;
		l = place / 8;
		c = place % 8;
		if (!ft_is_ok(board, l, c))
		{
			board[l][c] = 1;
			if (ft_solve_puzzle(board, index + 1, nb_comb))
			{
				(*nb_comb)++;
			}
			board[l][c] = 0;
		}
		place++;
	}
	return (ft_solve_puzzle(board, index + 1, nb_comb));
}

void	ft_init_board(int board[8][8])
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int		ft_eight_queens_puzzle(void)
{
	int		board[8][8];
	int		nb_comb;
	int		index;
	
	index = 0;
	nb_comb = 0;
	ft_init_board(board);
	ft_solve_puzzle(board, index, &nb_comb);
	return (nb_comb);
}

int		main(void)
{
	printf("%d\n", ft_eight_queens_puzzle()); 
	return (0);
}
