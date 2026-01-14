/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 14:28:49 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/14 16:55:40 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_sign(const char *str, int *i, int *sign)
{
	*sign = 1;
	if (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

static int	parse_digits(const char *str, int i, int sign, int *error)
{
	long	res;
	long	limit;

	res = 0;
	limit = (long)INT_MAX;
	if (sign == -1)
		limit = -(long)INT_MIN;
	while (str[i] >= '0' && str[i] <= '9')
	{
		if (res > (limit - (str[i] - '0')) / 10)
		{
			*error = 1;
			return (0);
		}
		res = res * 10 + (str[i++] - '0');
	}
	if (str[i] != '\0')
	{
		*error = 1;
		return (0);
	}
	return ((int)(res * sign));
}

int	parse_int(char *str, int *error)
{
	int	i;
	int	sign;

	if (!error)
		return (0);
	*error = 0;
	if (!str || !*str)
	{
		*error = 1;
		return (0);
	}
	i = 0;
	parse_sign(str, &i, &sign);
	if (str[i] < '0' || str[i] > '9')
	{
		*error = 1;
		return (0);
	}
	return (parse_digits(str, i, sign, error));
}
