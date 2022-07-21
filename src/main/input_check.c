/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   input_check.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 03:23:45 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/21 17:13:08 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_spaces(char **str)
{
	while (**str == ' ' && **str)
		(*str)++;
}

static void	check_is_number(char **str, size_t *valid_tokens)
{
	size_t	is_num;

	is_num = 0;
	if (ft_issign(**str))
		(*str)++;
	if (!ft_isdigit(**str))
		p_err(PS_INVALID_CHAR);
	while (ft_isdigit(**str) && **str)
	{
		(*str)++;
		if (!is_num)
			is_num++;
	}
	if (is_num)
		(*valid_tokens)++;
}

static void	check_string(const char *str, size_t *valid_tokens)
{
	size_t	initial_tokens;
	char	*str_cpy;

	initial_tokens = *valid_tokens;
	str_cpy = (char *)str;
	while (*str_cpy)
	{
		check_spaces(&str_cpy);
		check_is_number(&str_cpy, valid_tokens);
	}
	if (*valid_tokens == initial_tokens)
		p_err(EMPTY_STR);
}

size_t	check_and_count_tokens(int argc, char **argv)
{
	size_t	valid_tokens;
	int		i;

	i = 1;
	valid_tokens = 0;
	while (i < argc)
	{
		check_string(argv[i], &valid_tokens);
		i++;
	}
	return (valid_tokens);
}
