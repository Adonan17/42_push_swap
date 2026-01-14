/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:55:53 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/14 12:10:50 by aouassar         ###   ########.fr       */
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
