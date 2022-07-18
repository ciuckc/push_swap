/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 20:18:54 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/18 20:43:16 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	size_t	tokens;
	t_node	*stack_a;

	tokens = check_and_count_tokens(argc, argv);
	stack_a = create_list(extract_numbers(argv, tokens), tokens);
	sort_stack(&stack_a, tokens);
	free_list(&stack_a);
}
