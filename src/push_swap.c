/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/05 20:18:54 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/12 21:32:24 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_input_data	data_input;

	data_input.tokens = check_and_count_tokens(argc, argv);
	printf("My tokens are %zu\n", data_input.tokens);
}
