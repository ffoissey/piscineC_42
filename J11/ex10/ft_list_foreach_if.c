/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 22:07:49 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/13 16:53:47 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)
(void *), void *data_ref, int (*cmp)(void *, void *))
{
	t_list	*tmp;

	tmp = begin_list;
	if (!tmp)
		return ;
	while (tmp)
	{
		if (!(cmp(tmp->data, data_ref)))
			f(tmp->data);
		tmp = tmp->next;
	}
}
