/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/24 16:56:03 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/24 17:53:56 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	bits_counter(t_stack *a)
{
	int	bits;
	int	max;

	max = a->size - 1;
	bits = 0;
	while (max > 0)
	{
		max >>= 1;
		bits++;
	}
	return (bits);
}

void	radix_sort(t_stack *a, t_stack *b)
{
	int	bit;
	int	max_bits;
	int	count;

	if (!a || !b)
		return ;
	max_bits = bits_counter(a);
	bit = 0;
	while (bit < max_bits)
	{
		count = a->size;
		while (count-- > 0)
		{
			if (((a->top->index >> bit) & 1) == 0)
				pb(a, b);
			else
				ra(a);
		}
		while (b->size > 0)
			pa(a, b);
		bit++;
	}
}
