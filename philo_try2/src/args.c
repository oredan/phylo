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
/*   args.c                                   cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/07/08 22:15:45  /  2021/07/08 22:15:52 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	args_check(int c, char *v[], t_param* param)
{
	if (c <= 3)
		return (ww(1, ));
	return (OK);
}

int	args_parce(int c, char *v[], t_param* param)
{
	if ()
	{
		return (ERROR);
	}
	return (OK);
}

int	args(int c, char *v[], t_param* param)
{
	if (args_check(c, v))
		return (ERROR);
	if (args_parce(c, v, param))
		return (ERROR);
	return (OK);
}