/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:10:58 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/18 17:12:19 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	parse_error(t_stack *a, char **tokens)
{
	free_split(tokens);
	clear_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}

void	parse_argv(int argc, char **argv, t_stack *a)
{
	char	**tokens;
	int		i;
	int		j;
	int		err;
	t_node	*node;

	if (argc <= 1)
		return ;
	i = 0;
	while (++i < argc)
	{
		tokens = ft_split(argv[i], ' ');
		if (!tokens || !tokens[0])
			parse_error(a, tokens);
		j = 0;
		while (tokens[j])
		{
			node = node_new(parse_int(tokens[j], &err));
			if (err || !node)
				parse_error(a, tokens);
			stack_push_bottom(a, node);
			j++;
		}
		free_split(tokens);
	}
}
