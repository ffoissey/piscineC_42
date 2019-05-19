/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fight.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:54:20 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 14:08:59 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIGHT_H
# define FT_FIGHT_H

# include <unistd.h>
#include "ft_perso.h"
# define KICK 15.0
# define PUNCH 5.0
# define HEADBUTT 20.0

void	ft_putstr(char *str);
void	ft_fight(t_perso *str1, t_perso *str2, float hit);
int		ft_is_dead(t_perso *perso1, t_perso *perso2);

#endif
