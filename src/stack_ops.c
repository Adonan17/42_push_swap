/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_ops.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:20:50 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/12 14:54:50 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_swap_top(t_stack *stack)
{
	t_node	*firstnode;
	t_node	*secondnode;
	t_node	*thirdnode;

	if (!stack || stack->size < 2)
		return ;
	firstnode = stack->top;
	secondnode = firstnode->next;
	thirdnode = secondnode->next;
	stack->top = secondnode;
	secondnode->prev = NULL;
	secondnode->next = firstnode;
	firstnode->prev = secondnode;
	firstnode->next = thirdnode;
	if (thirdnode)
		thirdnode->prev = firstnode;
	else
		stack->bottom = firstnode;
}

void	stack_rotate(t_stack *stack)
{
	t_node	*firstnode;
	t_node	*secondnode;

	if (!stack || stack->size < 2)
		return ;
	firstnode = stack->top;
	secondnode = firstnode->next;
	stack->bottom->next = firstnode;
	firstnode->prev = stack->bottom;
	firstnode->next = NULL;
	secondnode->prev = NULL;
	stack->bottom = firstnode;
	stack->top = secondnode;
}
