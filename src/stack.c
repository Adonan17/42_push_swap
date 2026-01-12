/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 13:48:24 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/12 11:57:21 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_new(void)
{
	t_stack	*stack;

	stack = malloc(sizeof(t_stack));
	if (!stack)
		return (NULL);
	stack->top = NULL;
	stack->bottom = NULL;
	stack->size = 0;
	return (stack);
}

t_node	*node_new(int value)
{
	t_node	*node;

	node = malloc(sizeof(t_node));
	if (!node)
		return (NULL);
	node->value = value;
	node->next = NULL;
	node->prev = NULL;
	return (node);
}

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