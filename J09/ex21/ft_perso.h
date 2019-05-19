/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_perso.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 10:13:34 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 13:56:51 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PERSO_H
# define FT_PERSO_H

# define SAVE_THE_WORLD "Save the world"
# include <string.h>

typedef	struct	s_perso
{
	char	*name;
	float		life;
	int			age;
	char		*profession;
}				t_perso;

#endif
