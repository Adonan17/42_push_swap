/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 12:05:09 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/22 13:43:47 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_stack *a)
{
	if (!a || a->size != 2)
		return ;
	if (a->top->value > a->top->next->value)
		sa(a);
}

void	sort(t_stack *a, t_stack *b)
{
	if (!a || !b)
		return ;
	if (a->size == 2)
		sort_two(a);
}