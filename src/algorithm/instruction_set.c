/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   instruction_set.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 18:03:14 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/25 19:56:30 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_instructions(int op_code)
{
}

void	push_from(t_node **src, t_node **dest, int op_code)
{
	t_node	*new;

	if (*src == NULL)
		return ;
	new = create_node((*src)->number);
	if (new == NULL)
	{
		free_list(src);
		if (*dest)
			free_list(dest);
		p_err(MALLOC_FAIL);
	}
	lst_add_front(dest, new);
	lst_remove_node(src);
}

void	swap_top(t_node	**head, int op_code)
{
}

void	rotate(t_node **head, int op_code)
{
}

void	reverse_rotate(t_node	**head, int op_code)
{
}
