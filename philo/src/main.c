/* ************************************************************************** */
/*                                                                            */
/*       ::::::    ::::::   :::  ::::::::  ::::::::   :::  ::::::    :::::::  */
/*     :+:   :+: :+:   :+: :+: :+:   :+:  :+:    :+: :+: :+:   :+: :+:    :+: */
/*    +:+       +:+       +:+ +:+   +:+  +:+    +:+     +:+       +:+    +:+  */
/*   +#+       +:+       +#+ +:+   +#+  +:+    +#+ +:+ +#+       +#+:+:+#+:   */
/*  +#+       +#+       +#+   +#+#+#+# #+#+#+#+   +#+ +#+       +#+           */
/* #+#   #+# #+#   #+# #+#            #+#    #+# #+# #+#   #+# #+#    #+#     */
/*  ######    ######  ############## ###    ### ###   ######    #######       */
/*                                                                            */
/* ************************************************************************** */
/*                                                                            */
/*   main.c                                   cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/06/29 17:05:28  /  2021/06/29 17:05:29 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	alloc_phl(t_phl *phl, int c, char *v[])
{
	phl->frks = (unsigned int *)malloc(sizeof(unsigned int) * phl->n0phl);
	phl->phls = (t_elm *)malloc(sizeof(t_elm) * phl->n0phl);
	if (!phl->frks || !phl->phl)
		return (write(1, E_MAE, ft_strlen(E_MAE)));
	return (0);
}

int	init_phl(t_phl *phl, int c, char *v[])
{
	if (4 >= c)
		return (write(1, E_NEA, ft_strlen(E_NEA)));
	if (c >= 7)
		return (write(1, E_TMA, ft_strlen(E_TMA)));
	if (not_num(v[1]) || not_num(v[2]) || not_num(v[3]) || not_num(v[4])
		|| (c == 6 && not_num(v[5])))
		return (write(1, E_ANN, ft_strlen(E_ANN)));
	phl->n0phl = ft_atoi(v[1]);
	phl->t2die = ft_atoi(v[2]);
	phl->t2eat = ft_atoi(v[3]);
	phl->t2slp = ft_atoi(v[4]);
	if (c == 6)
		phl->n0eat = ft_atoi(v[5]);
	else
		phl->n0eat = 0xffffffff;
	return (0);
}

int main(int c, char *v[])
{
	t_phl	phl;

	if (init_phl(&phl, c, v))
		return (-1);
	if (alloc_phl(&phl, c, v))
		returb (-1);
	return (0);
}
