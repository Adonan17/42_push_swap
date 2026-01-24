/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:10:58 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/18 17:22:24 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_error(t_stack *a, char **tokens)
{
    free_split(tokens);
    clear_stack(a);
    clear_stack(b);
    free(a);
    free(b);
    write(2, "Error\n", 6);
    exit(1);
}

static int	is_duplicate(t_stack *a, int value)
{
	t_node	*cur;

	cur = a->top;
	while (cur)
	{
		if (cur->value == value)
			return (1);
		cur = cur->next;
	}
	return (0);
}

static void	parse_tokens(t_stack *a, char **tokens)
{
	int		j;
	int		err;
	int		value;
	t_node	*node;

	j = 0;
	while (tokens[j])
	{
		value = parse_int(tokens[j], &err);
		if (err || is_duplicate(a, value))
			parse_error(a, tokens);
		node = node_new(value);
		if (!node)
			parse_error(a, tokens);
		stack_push_bottom(a, node);
		j++;
	}
}

void	parse_argv(int argc, char **argv, t_stack *a, t_stack *b)
{
	char	**tokens;
	int		i;

	if (argc <= 1)
		return ;
	i = 0;
	while (++i < argc)
	{
		tokens = ft_split(argv[i], ' ');
		if (!tokens || !tokens[0])
			parse_error(a, b, tokens);
		parse_tokens(a, tokens);
		free_split(tokens);
	}
}
