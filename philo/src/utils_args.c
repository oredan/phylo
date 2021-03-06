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
/*   utils_args.c                             cclarice@student.21-school.ru   */
/*                                                                            */
/*   Created/Updated: 2021/07/10 21:24:52  /  2021/07/17 21:05:10 @cclarice   */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	string_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	wrt_err(const char *str)
{
	write(1, "Error: ", 7);
	write(1, str, string_len(str));
	write(1, "\n", 1);
	return (ERROR);
}

int	not_num(const char *str)
{
	int	p;

	p = 0;
	if (str[p] == '-' || str[p] == '+')
		p++;
	while (str[p])
	{
		if (str[p] < '0' || str[p] > '9')
			return (TRUE);
		p++;
	}
	return (FALSE);
}

int	ft_atoi(const char *str)
{
	const char	sgn = 1 - (*str == '-') * 2;
	int			ret;

	ret = 0;
	str += (*str == '-' || *str == '+');
	while (*str == '0')
		str++;
	while ((*str >= '0' && *str <= '9' && ret <= 214748363)
		|| (*str >= '0' && *str <= '7' && ret == 214748364))
	{
		ret *= 10;
		ret += *str - '0';
		str++;
	}
	if (*str >= '0' && *str <= '9')
	{
		if (sgn == 1)
			return (2147483647);
		return (-2147483648);
	}
	return (ret * sgn);
}
