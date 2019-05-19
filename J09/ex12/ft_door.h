/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_door.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:24:43 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 10:52:59 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DOOR_H
# define FT_DOOR_H

# include <unistd.h>
# define CLOSE "FALSE"
# define OPEN "TRUE"
# define EXIT_SUCCESS 0

typedef	enum	e_bool
{
	FALSE,
	TRUE
}				t_bool;

typedef	struct	s_door
{
	char	*state;
}				t_door;

#endif
