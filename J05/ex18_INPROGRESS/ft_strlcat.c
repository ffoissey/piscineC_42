/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/02 12:19:46 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/04 16:06:20 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (dest[i] && size)
	{
		size--;
		i++;
	}
	while (src[j])
	{
		dest[i] = src[j];
		j++;
		i++;
		size--;
	}
	dest[i] = '\0';
	return (i);
}

int		main(void)
{
	char	tab1[100] = "YVArXlGyqNIaEtnqsWTZXcxHPmAPfewQjpNcdFKjd";
	char	tab_1[100] = "YVArXlGyqNIaEtnqsWTZXcxHPmAPfewQjpNcdFKjd";
	char	tab2[100] = "HQbVrjiXsIewZ";
	char	tab_2[100] = "HQbVrjiXsIewZ";
	
	strlcat(tab1, tab2, 18);
	ft_strlcat(tab_1, tab_2, 18);

	printf("lcat: %s\nmy_lcat : %s", tab1, tab2);
return (0);
}
