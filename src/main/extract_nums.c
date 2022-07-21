/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   extract_nums.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/19 05:55:15 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/21 17:04:44 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_dupes(long *num_list, size_t tokens)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < tokens)
	{
		j = 0;
		while (j < i)
		{
			if (num_list[j] == num_list[i])
			{
				free(num_list);
				p_err(DUPE_CHECK);
			}
			j++;
		}
		i++;
	}
}

long	*extract_numbers(char **argv, size_t tokens)
{
	size_t	i;
	long	*number_list;

	i = 0;
	number_list = calloc(tokens, sizeof(long));
	if (number_list == NULL)
		p_err(MALLOC_FAIL);
	while (*argv)
	{
		while (**argv)
		{
			number_list[i] = ft_atoi(argv);
			if (number_list[i] > INT_MAX || number_list[i] < INT_MIN)
			{
				free(number_list);
				p_err(INT_LIMIT);
			}
			i++;
		}
		argv++;
	}
	check_dupes(number_list, tokens);
	return (number_list);
}
