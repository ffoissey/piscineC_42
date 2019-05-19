/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/12 19:03:03 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/13 21:45:37 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	count;
	t_list			*tmp;

	count = 0;
	tmp = begin_list;
	if (!tmp)
		return (NULL);
	while (tmp)
	{
		if (count == nbr)
			return (tmp);
		tmp = tmp->next;
		count++;
	}
	return (NULL);
}
