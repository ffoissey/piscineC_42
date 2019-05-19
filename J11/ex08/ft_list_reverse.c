/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:39:06 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/12 21:04:10 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*keep;
	t_list	*next;

	keep = NULL;
	tmp = *begin_list;
	while (tmp)
	{
		next = tmp->next;
		tmp->next = keep;
		keep = tmp;
		tmp = next;
	}
	*begin_list = keep;
}
