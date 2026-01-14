/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:56:03 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/14 12:23:53 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *a)
{
	if (!a || a->size < 2)
		return ;
	stack_swap_top(a);
	write(1, "sa\n", 3);
}

void	sb(t_stack *b)
{
	if (!b || b->size < 2)
		return ;
	stack_swap_top(b);
	write(1, "sb\n", 3);
}