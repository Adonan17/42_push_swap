/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:55:53 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/14 13:44:12 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pb(t_stack *a, t_stack *b)
{
	t_node	*node;

	if (!a || !b || a->size == 0)
		return ;
	node = stack_pop_top(a);
	stack_push_top(b, node);
	write(1, "pb\n", 3);
}

void	pa(t_stack *b, t_stack *a)
{
	t_node	*node;

	if (!a || !b || b->size == 0)
		return ;
	node = stack_pop_top(b);
	stack_push_top(a, node);
	write(1, "pa\n", 3);
}
