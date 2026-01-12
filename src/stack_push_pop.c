/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_push_pop.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/12 12:03:32 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/12 12:04:20 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_push_top(t_stack *stack, t_node *node)
{
	if (!stack || !node)
		return ;
	node->prev = NULL;
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
	}
	else
	{
		node->next = stack->top;
		stack->top->prev = node;
		stack->top = node;
	}
	stack->size++;
}

void	stack_push_bottom(t_stack *stack, t_node *node)
{
	if (!stack || !node)
		return ;
	node->next = NULL;
	if (stack->size == 0)
	{
		stack->top = node;
		stack->bottom = node;
	}
	else
	{
		node->prev = stack->bottom;
		stack->bottom->next = node;
		stack->bottom = node;
	}
	stack->size++;
}

t_node	*stack_pop_top(t_stack *stack)
{
	t_node	*topnode;

	if (!stack || stack->size == 0)
		return (NULL);
	topnode = stack->top;
	if (stack->size == 1)
	{
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else
	{
		stack->top = topnode->next;
		stack->top->prev = NULL;
	}
	topnode->next = NULL;
	topnode->prev = NULL;
	stack->size--;
	return (topnode);
}

t_node	*stack_pop_bottom(t_stack *stack)
{
	t_node	*bottomnode;

	if (!stack || stack->size == 0)
		return (NULL);
	bottomnode = stack->bottom;
	if (stack->size == 1)
	{
		stack->top = NULL;
		stack->bottom = NULL;
	}
	else
	{
		stack->bottom = bottomnode->prev;
		stack->bottom->next = NULL;
	}
	bottomnode->next = NULL;
	bottomnode->prev = NULL;
	stack->size--;
	return (bottomnode);
}
