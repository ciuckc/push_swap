/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 01:39:46 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/13 00:31:50 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# define ARGC_ERR 1
# define PS_INVALID_CHAR 2
# define EMPTY_STR 3

typedef struct s_input_data
{
	size_t	tokens;
}	t_input_data;

size_t	check_and_count_tokens(int argc, char **argv);

void	p_err(int err_code);

#endif
