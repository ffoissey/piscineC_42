/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/07 13:05:14 by ffoissey          #+#    #+#             */
/*   Updated: 2018/09/07 14:05:51 by ffoissey         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_fight.h"

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while(str[i])
		i++;
	write(1, str, i);
}

int		ft_is_dead(t_perso *perso1, t_perso *perso2)
{
	if (perso1->life <= 0.0)
	{
		ft_putstr(perso1->name);
		ft_putstr(" is dead.\n");
		return (1);
	}
	else if (perso2->life <= 0.0)
	{
		ft_putstr(perso2->name);
		ft_putstr(" is dead.\n");
		return (1);
	}
	return (0);
}

void	ft_fight(t_perso *perso1, t_perso *perso2, float hit)
{
	if (ft_is_dead(perso1, perso2))
		return ;
	ft_putstr(perso1->name);
	ft_putstr(" does a ");
	if (hit == 5.0)
		ft_putstr("judo punch");
	else if (hit == 15.0)
		ft_putstr("judo kick");	
	else
		ft_putstr("judo headbutt");	
	ft_putstr(" on ");
	ft_putstr(perso2->name);
	ft_putstr(".\n");
	perso2->life -= hit;
	if (ft_is_dead(perso1, perso2))
		return ;
}

int main(void)
{
	t_perso nicolas_bauer;
	t_perso anastacia;
	
	anastacia.life = 100.0;
	anastacia.name = "Anastacia";
	nicolas_bauer.life = 100.0;
	nicolas_bauer.name = "Nicolas Bauer";
	ft_fight(&nicolas_bauer, &anastacia, KICK);
	ft_fight(&anastacia, &nicolas_bauer, PUNCH);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	ft_fight(&nicolas_bauer, &anastacia, HEADBUTT);
	return (0);
}
