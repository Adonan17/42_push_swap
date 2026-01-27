/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/19 15:44:01 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/27 16:00:00 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	cleanup_and_exit(t_stack *a, t_stack *b, int exit_code)
{
	clear_stack(a);
	clear_stack(b);
	free(a);
	free(b);
	if (exit_code == 1)
		write(2, "Error\n", 6);
	exit(exit_code);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;

	a = stack_new();
	b = stack_new();
	if (!a || !b)
		cleanup_and_exit(a, b, 1);
	parse_argv(argc, argv, a, b);
	if (!is_sorted(a))
		sort(a, b);
	cleanup_and_exit(a, b, 0);
	return (0);
}
