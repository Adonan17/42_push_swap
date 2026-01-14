/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 13:30:55 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/14 11:48:50 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

typedef struct s_node
{
	int				value;
	struct s_node	*next;
	struct s_node	*prev;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}	t_stack;

// stack_new
t_stack	*stack_new(void);
t_node	*node_new(int value);

// stack_push_pop
void	stack_push_top(t_stack *stack, t_node *node);
void	stack_push_bottom(t_stack *stack, t_node *node);
t_node	*stack_pop_top(t_stack *stack);
t_node	*stack_pop_bottom(t_stack *stack);

// stack_ops.c
void	stack_swap_top(t_stack *stack);
void	stack_rotate(t_stack *stack);
void	stack_rev_rotate(t_stack *stack);

#endif