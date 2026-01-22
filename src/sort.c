/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:05:09 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/22 21:18:16 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	push_min_to_b(t_stack *a, t_stack *b)
{
	int		min;
	int		idx;
	t_node	*cur;

	min = get_min(a);
	idx = 0;
	cur = a->top;
	while (cur && cur->value != min)
	{
		idx++;
		cur = cur->next;
	}
	while (a->top && a->top->value != min)
	{
		if (idx <= (int)(a->size / 2))
			ra(a);
		else
			rra(a);
	}
	pb(a, b);
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
	while (a->size > 3)
		push_min_to_b(a, b);
	sort_three(a);
	while (b->size > 0)
		pa(a, b);
}

void	sort(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	if (a->size == 2)
	{
		if (a->top->value > a->top->next->value)
			sa(a);
	}
	else if (a->size == 3)
		sort_three(a);
	else if (a->size <= 5)
		sort_five(a, b);
	else
{
	assign_index(a);
	radix_sort(a, b);
}
}
