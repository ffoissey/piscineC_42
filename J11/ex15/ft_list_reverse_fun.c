/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 23:10:32 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/13 23:54:03 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*tmp;
	t_list	*keep;
	t_list	*next;

	keep = NULL;
	tmp = begin_list;
	if (!tmp)
		return ;
	while (tmp)
	{
		next = tmp->next;
		tmp->next = keep;
		keep = tmp;
		tmp = next;
	}
	tmp = keep;
}
