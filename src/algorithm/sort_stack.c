/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_stack.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 07:55:25 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/18 21:41:15 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_node **stack_a, size_t tokens)
{
	t_node	*stack_b;

	(void)tokens;
	stack_b = NULL;
	push_from(stack_a, &stack_b, PB);
	push_from(stack_a, &stack_b, PB);
	push_from(stack_a, &stack_b, PB);
	push_from(&stack_b, stack_a, PA);
	ft_printf("Stack A:\nNode with nr %d\tAddress is %p\t", (*stack_a)->number, (*stack_a));
	ft_printf("Next node is %p with value of %d\t", (*stack_a)->next, ((*stack_a)->next)->number);
	ft_printf("Previous node is %p with value of %d\n", (*stack_a)->previous, ((*stack_a)->previous)->number);
	ft_printf("Stack B:\nNode with nr %d\tAddress is %p\t", (stack_b)->number, (stack_b));
	ft_printf("Next node is %p with value of %d\t", (stack_b)->next, ((stack_b)->next)->number);
	ft_printf("Previous node is %p with value of %d\n", (stack_b)->previous, ((stack_b)->previous)->number);
}
