/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/15 13:45:54 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/16 21:43:02 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef READ_H
# define READ_H

# include "print.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>

typedef	struct	s_sign
{
	char	s1;
	char	s2;
	char	s3;
}				t_sign;

char			*ft_read(char *str);
void			ft_strcpy(char *src, char *dest);
void			ft_extract_xy(int *x, int *y, char *map);
int				ft_compare(int x, int y, char *map);
int				check_other_rush(int x, int y, char *map, char *rush);
int				ft_check(char *real, char *cpy);
int				ft_print_line(char sign1, char sign2, int x, char *rush);
char			*rush00(int x, int y, char *rush);
char			*rush01(int x, int y, char *rush);
char			*rush02(int x, int y, char *rush);
char			*rush03(int x, int y, char *rush);
char			*rush04(int x, int y, char *rush);
int				ft_get_line(t_sign line, int x, char *rush);
void			set_struct(char s1, char s2, char s3, t_sign *line);

#endif
