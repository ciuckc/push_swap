/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_stack.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 07:55:25 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/21 22:04:25 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	is_sorted(t_node *stack_a)
{
	t_node	*last;

	last = stack_a->previous;
	while (stack_a != last)
	{
		if (stack_a->number < stack_a->next->number)
			stack_a = stack_a->next;
		else
			return (0);
	}
	return (1);
}

void	sort_stack(t_node **stack_a, size_t tokens)
{
	t_node	*stack_b;

	(void)tokens;
	stack_b = NULL;
	while (!is_sorted(*stack_a))
	{
		if (tokens == 2)
			sort_two(stack_a);
		else if (tokens == 3)
			sort_three(stack_a);
		else if (tokens == 4)
			sort_four(stack_a, &stack_b, tokens);
	}
}
