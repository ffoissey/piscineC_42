/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 22:49:10 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/13 23:53:27 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*cp_list;
	char	*tmp;

	tmp = NULL;
	cp_list = *begin_list;
	if (!cp_list)
		return ;
	if (!(cp_list->next))
		return ;
	if (!(cp_list->next->next))
		return ;
	while (cp_list->next->next)
	{
		if (cmp(cp_list->data, cp_list->next->data) < 0)
		{
			tmp = cp_list->next->data;
			cp_list->next->data = cp_list->data;
			cp_list->data = tmp;
			cp_list = *begin_list;
		}
		else
			cp_list = cp_list->next;
	}
}
