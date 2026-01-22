/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aouassar <aouassar@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/22 21:16:09 by aouassar          #+#    #+#             */
/*   Updated: 2026/01/22 21:34:07 by aouassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	insertion_sort(int *arr, int n)
{
	int	i;
	int	j;
	int	key;

	i = 1;
	while (i < n)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		i++;
	}
}

void	assign_index(t_stack *a)
{
	t_node	*cur;
	int		*array;
	int		i;

	if (!a || a->size == 0)
		return ;
	array = malloc(a->size * sizeof(int));
	if (!array)
		return ;
	i = 0;
	cur = a->top;
	while (cur)
	{
		array[i] = cur->value;
		cur = cur->next;
		i++;
	}
	insertion_sort(array, a->size);
	free(array);
}
