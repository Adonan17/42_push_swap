/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/16 21:10:58 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/16 21:49:52 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_split(char **tokens)
{
	int	i;
	if (tokens == NULL)
		return ;
	i = 0;
	while (tokens[i])
	{
		free(tokens[i]);
		i++;
	}
	free(tokens);
}

void	parse_argv(int argc, char **argv, t_stack *a)
{
	char	**tokens;
	int		i;
	int		j;

	(void)a;
	if (argc <= 1)
		return ;
	i = 1;
	while (i < argc)
	{
		tokens = ft_split(argv[i], ' ');
		if (tokens == NULL || tokens[0] == NULL)
		{
			write(2, "Error\n", 5);
			free_split(tokens);
			exit(1);
		}
		j = 0;
		while (tokens[j])
		{
			parse_int(tokens[j], &err);
			j++;
		}
		free_split(tokens);
		i++;
	}
}

