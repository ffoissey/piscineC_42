/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_destroy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 22:42:37 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/06 22:59:37 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_ultimator.h"

void	ft_destroy(char ***factory)
{
	while (**factory)
	{
		free(**factory);
		(**factory)++;
	}
	while (*factory)
	{
		free(*factory);
		(*factory)++;
	}
	while (factory)
	{
		free(factory);
		factory++;
	}
}
