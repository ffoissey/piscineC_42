/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 12:22:50 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/03 22:36:41 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int		i;

	i = 0;
	while (src[i] && size)
	{
		dest[i] = src[i];
		size--;
		i++;
	}
	while (src[i])
	{
		dest[i] = '\0';
		i++;
	}
	dest[i] = '\0';
	return (i);
}
