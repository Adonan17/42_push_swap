/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:05:09 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/22 18:01:45 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *a)
{
	if (!a || a->size != 2)
		return ;
	if (a->top->value > a->top->next->value)
		sa(a);
}

void	sort_three(t_stack *a)
{
	int	x;
	int	y;
	int	z;

	if (!a || a->size != 3)
		return ;
	x = a->top->value;
	y = a->top->next->value;
	z = a->bottom->value;
	if (x > y && x < z)
		sa(a);
	else if (x > y && y > z)
	{
		sa(a);
		rra(a);
	}
	else if (x > y && y < z && x > z)
		ra(a);
	else if (x < y && y > z && x < z)
	{
		sa(a);
		ra(a);
	}
	else if (x < y && y > z && x > z)
		rra(a);
}

void	sort_five(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	pb(a, b);
	sort_three(a);
}

void	sort(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	if (a->size == 2)
		sort_two(a);
	else if (a->size == 3)
		sort_three(a);
}
