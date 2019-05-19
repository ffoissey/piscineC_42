/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 18:13:59 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/17 13:25:50 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*tmp;
	t_list	*del;

	tmp = *begin_list;
	del = *begin_list;
	if (!(*begin_list))
		return ;
	while (tmp)
	{
		del = tmp->next;
		free(tmp);
		tmp = del;
	}
	*begin_list = NULL;
}
