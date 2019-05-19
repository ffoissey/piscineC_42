/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 17:54:51 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/19 20:49:16 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdlib.h>
# define ERROR "map error\n"
# define FALSE 0
# define TRUE 1
# define BUF_SIZE 16000

typedef struct	s_data
{
	int			nbr_line;
	int			x;
	int			bsq;
	int			pos;
	int			max_pos;
	char		empty;
	char		block;
	char		full;
}				t_data;

int				bsq(char *map, int fd);
int				clear_all(char *first_line, int *matrix,
t_data *data, char *map);
t_data			*ft_check_map(char *first_line, char *map);
char			*ft_get_first_line(char *map);
int				ft_check_line_char(t_data *data, char *map);
void			all_arg(int ac, char **av, char *map);
void			ft_putchar(char c);
void			ft_putstr(char *str, int fd);
int				ft_atoi(char *str);
char			*ft_read(char *str, int fd);
int				ft_strlen(char *str);
void			ft_strcpy(char *src, char *dest);
void			ft_strncpy(char *src, char *dest, int n);
int				fill_matrix(int *matrix, char *map, t_data *data);
void			operate_matrix(int *matrix, t_data *data);
int				square_matrix(int *matrix, int i, t_data *data);
void			fill_square(int *matrix, t_data *data);
void			print_matrix(int *matrix, t_data *data);

#endif
