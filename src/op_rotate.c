/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:56:16 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/14 13:40:18 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	stack_rotate(a);
	write(1, "ra\n", 3);
}

void	rb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	stack_rotate(b);
	write(1, "rb\n", 3);
}

void	rr(t_stack *a, t_stack *b)
{
	if (!a || !b || (a->size < 2 && b->size < 2))
		return ;
	stack_rotate(a);
	stack_rotate(b);
	write(1, "rr\n", 3);
}
