/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 17:21:45 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/21 22:18:43 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->number > ((*stack_a)->next)->number)
		swap_top(stack_a, NULL, SA);
	else
		return ;
}

void	sort_three(t_node **a)
{
	sort_two(a);
	if (is_sorted(*a))
		return ;
	else if ((*a)->number < (*a)->next->number && (*a)->next->number > \
	(*a)->previous->number)
		reverse_rotate(a, NULL, RRA);
	else if ((*a)->number > (*a)->next->number && (*a)->next->number < \
	(*a)->previous->number)
		rotate(a, NULL, RA);
}

void	sort_four(t_node **a, t_node **b, size_t tokens)
{
	t_node	*smallest_num;
	t_node	*last;

	sort_two(a);
	if (is_sorted(*a))
		return ;
	smallest_num = *a;
	last = (*a)->previous;
	while ((*a) != last)
	{
		*a = (*a)->next;
		if ((*a)->number < (smallest_num)->number)
			smallest_num = (*a);
	}
	//find smallest number in the list, return the node address, then shuffle to it until it becomes head, push it, sort 3, and push back
	//should update the lst_add_back(last one should always point to head of list), so we can implement a proper lst_size
}
