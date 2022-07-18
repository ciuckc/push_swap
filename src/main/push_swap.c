/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 20:18:54 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/18 19:45:30 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	size_t	tokens;
	t_node	*stack_a;

	tokens = check_and_count_tokens(argc, argv);
	stack_a = create_list(extract_numbers(argv, tokens), tokens);
	while (tokens)
	{
		printf("Value and address and sizeof node is: %ld\t%p\n", stack_a->number, stack_a);
		stack_a = stack_a->next;
		tokens--;
	}
	free_list(&stack_a);
}
