/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 20:04:40 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/22 19:02:47 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *a)
{
	t_node	*current;

	if (a == NULL || a->size < 2)
		return (1);
	current = a->top;
	while (current->next)
	{
		if (current->value > current->next->value)
			return (0);
		current = current->next;
	}
	return (1);
}

int	get_min(t_stack *a)
{
	int		min;
	t_node	*cur;

	if (!a || !a->top)
		return (0);
	min = a->top->value;
	cur = a->top->next;
	while (cur)
	{
		if (min > cur->value)
			min = cur->value;
		cur = cur->next;
	}
	return (min);
}

int	get_max(t_stack *a)
{
	int		max;
	t_node	*cur;

	if (!a || !a->top)
		return (0);
	max = a->top->value;
	cur = a->top->next;
	while (cur)
	{
		if (max < cur->value)
			max = cur->value;
		cur = cur->next;
	}
	return (max);
}
