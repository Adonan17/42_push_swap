/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:56:28 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/14 13:42:34 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	stack_rev_rotate(a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	stack_rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *a, t_stack *b)
{
	if (!a || !b || (a->size < 2 && b->size < 2))
		return ;
	stack_rev_rotate(a);
	stack_rev_rotate(b);
	write(1, "rrr\n", 4);
}
