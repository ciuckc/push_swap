/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   sort_stack.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 07:55:25 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/15 21:37:17 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_stack(t_node **stack_a, size_t tokens)
{
	t_node	*stack_b;

	(void)tokens;
	stack_b = NULL;
	push_from(stack_a, &stack_b);
}
//	printf("Stack A:\nNode with nr %ld\tAddress is %p\t", (*stack_a)->number, (*stack_a));
//	printf("Next node is %p with value of %ld\t", (*stack_a)->next, ((*stack_a)->next)->number);
//	printf("Previous node is %p with value of %ld\n", (*stack_a)->previous, ((*stack_a)->previous)->number);
//	printf("Stack B:\nNode with nr %ld\tAddress is %p\t", (stack_b)->number, (stack_b));
//	printf("Next node is %p with value of %ld\t", (stack_b)->next, ((stack_b)->next)->number);
//	printf("Previous node is %p with value of %ld\n", (stack_b)->previous, ((stack_b)->previous)->number);
