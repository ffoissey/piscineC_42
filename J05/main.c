/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 16:06:06 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/03 23:42:51 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

#include "ex01/ft_putnbr.c"
#include "ex02/ft_atoi.c"
#include "ex03/ft_strcpy.c"
#include "ex04/ft_strncpy.c"
#include "ex10/ft_strcapitalize.c"
#include "ex18/ft_strlcat.c"
#include "ex19/ft_strlcpy.c"

int		main(int argc, char *argv[])
{
	char	tab1[100] = "Hola bonjour ca va!";
	char	tab1_b[100] = "Hola bonjour ca va!";
	char	tab2[100] = "oui yeah hey";
	char	tab2_b[100] = "oui yeah hey";
	char	tab3[100] = "blablablafh";
	char	tab3_b[100] = "blablablafh";
	char	tab4[100] = "blablerffih";
	char	tab4_b[100] = "blablerffih";
	char	tab5[100] = "bOnjOUr je Suis Bizare 42mots";
	char	tab6[100] = "bonjour bonjour je suis americain";
	char	tab6_bis[100] = "bonjour bonjour je suis americain";
	char	tab7[100] = "gambas a lhuile";
	char	tab7_bis[100] = "gambas a lhuile";
	char	tab8[100] = "bonjour bonjour je suis americain";
	char	tab8_bis[100] = "bonjour bonjour je suis americain";
	char	tab9[100] = "gambas a lhuile";
	char	tab9_bis[100] = "gambas a lhuile";

	printf("strcpy: %s\nft_strcpy: %s\n\n", strcpy(tab1, tab2), ft_strcpy(tab1_b, tab2_b));
	printf("strncpy: %s\nft_strncpy: %s\n\n", strncpy(tab3, tab4, 50), ft_strncpy(tab3_b, tab4_b, 50));
	printf("ft_strcapitalize : %s\n\n", ft_strcapitalize(tab5));
	printf("strlcat: %lu\nft_strlcat: %d\n\n", strlcat(tab6, tab7, 4), ft_strlcat(tab6_bis, tab7_bis, 4));
	printf("strlcpy: %lu\nft_strlcpy: %d\n\n", strlcpy(tab8, tab9, 10), ft_strlcpy(tab8_bis, tab9_bis, 10));
	return (0);
}
