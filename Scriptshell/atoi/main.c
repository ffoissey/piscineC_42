/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/10 13:38:34 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/10 13:43:28 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	printf("\n\n__ATOI__\nResult: %d\n\n__FT_ATOI__\nResult: %d\n\n", atoi(argv[1]), ft_atoi(argv[1]));	
	return (0);
}
