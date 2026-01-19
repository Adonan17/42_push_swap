/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 13:30:55 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/19 20:12:43 by aouassar         ###   ########.fr       */
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

/* STACK CREATION */
t_stack	*stack_new(void);
t_node	*node_new(int value);

/* STACK PUSH / POP */
void	stack_push_top(t_stack *stack, t_node *node);
void	stack_push_bottom(t_stack *stack, t_node *node);
t_node	*stack_pop_top(t_stack *stack);
t_node	*stack_pop_bottom(t_stack *stack);

/* STACK OPS (NO PRINT) */
void	stack_swap_top(t_stack *stack);
void	stack_rotate(t_stack *stack);
void	stack_rev_rotate(t_stack *stack);

/* PUSH_SWAP COMMANDS (PRINT) */
void	pa(t_stack *a, t_stack *b);
void	pb(t_stack *a, t_stack *b);

void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);

void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);

void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);

int		parse_int(char *str, int *error);
void	parse_argv(int argc, char **argv, t_stack *a);

void	clear_stack(t_stack *a);
void	free_split(char **tokens);

int	is_sorted(t_stack *a);

#endif