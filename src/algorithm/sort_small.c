/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_small.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/21 17:21:45 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/25 21:07:09 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_node **stack_a)
{
	if ((*stack_a)->number > ((*stack_a)->next)->number)
		swap_top(stack_a, SA);
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
		reverse_rotate(a, RRA);
	else if ((*a)->number > (*a)->next->number && (*a)->next->number < \
	(*a)->previous->number)
		rotate(a, RA);
}
