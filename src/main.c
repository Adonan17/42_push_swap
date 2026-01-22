/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:44:01 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/22 11:59:57 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = stack_new();
	b = stack_new();
	if (!a || !b)
	{
		clear_stack(a);
		clear_stack(b);
		free(a);
		free(b);
		write(2, "Error\n", 6);
		return (1);
	}
	parse_argv(argc, argv, a);
	if (is_sorted(a))
	{
		clear_stack(a);
		clear_stack(b);
		free(a);
		free(b);
		return (0);
	}
	sort(a, b);
	clear_stack(a);
	clear_stack(b);
	free(a);
	free(b);
	return (0);
}
