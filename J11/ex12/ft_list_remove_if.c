/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 22:24:58 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/13 23:52:09 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*del;

	tmp = *begin_list;
	del = *begin_list;
	if (!tmp)
		return ;
	while (tmp)
	{
		if (!(cmp(tmp->data, data_ref)))
		{
			del = tmp->next;
			free(tmp);
			tmp = del;
		}
		else
			tmp = tmp->next;
	}
}
