/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 20:18:54 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/21 17:13:26 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	size_t	tokens;
	t_node	*stack_a;

	if (argc == 1)
		return (0);
	tokens = check_and_count_tokens(argc, argv);
	stack_a = create_list(extract_numbers(argv + 1, tokens), tokens);
	sort_stack(&stack_a, tokens);
}
