/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 03:23:45 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/13 03:36:22 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static void	check_spaces(char **str)
{
	while (**str == ' ' && **str)
		(*str)++;
}

static void	check_is_number(char **str, size_t *valid_tokens)
{
	size_t	is_num;

	is_num = 0;
	if (**str == '-')
		(*str)++;
	if (!is_digit(**str))
		p_err(PS_INVALID_CHAR);
	while (is_digit(**str) && **str)
	{
		(*str)++;
		if (!is_num)
			is_num++;
	}
	if (is_num)
		(*valid_tokens)++;
}

static void	check_string(char *str, size_t *valid_tokens)
{
	size_t	initial_tokens;

	initial_tokens = *valid_tokens;
	while (*str)
	{
		check_spaces(&str);
		check_is_number(&str, valid_tokens);
	}
	if (*valid_tokens == initial_tokens)
		p_err(EMPTY_STR);
}

size_t	check_and_count_tokens(int argc, char **argv)
{
	size_t	valid_tokens;
	size_t	i;
	char	**argv_cp;

	i = 1;
	argv_cp = argv;
	valid_tokens = 0;
	if (argc == 1)
		p_err(ARGC_ERR);
	while (*(argv_cp + i))
	{
		check_string(*(argv_cp + i), &valid_tokens);
		i++;
	}
	return (valid_tokens);
}
