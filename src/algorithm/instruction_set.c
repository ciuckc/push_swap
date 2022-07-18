/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   instruction_set.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 18:03:14 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/18 21:49:51 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_from(t_node **src, t_node **dest, size_t op_code)
{
	t_node	*new;

	(void)op_code;
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

void	swap_top(t_node	**head, size_t op_code)
{
	long	tmp;

	(void)op_code;
	if (*head == (*head)->next)
		return ;
	tmp = ((*head)->next)->number;
	((*head)->next)->number = (*head)->number;
	(*head)->number = tmp;
}

void	rotate(t_node **head, size_t op_code)
{
	(void)op_code;
	if (*head == (*head)->next)
		return ;
	(*head) = (*head)->next;
}

void	reverse_rotate(t_node **head, size_t op_code)
{
	(void)op_code;
	if (*head == (*head)->next)
		return ;
	(*head) = (*head)->previous;
}

void	print_instructions(size_t op_code)
{
	(void)op_code;
}

/* check if one of them is null, otherwise link whatever is necessarry(push) */
/* use defines of the instructions and pass them to a function 
with buffer */
/* if buffer is full check the last one to see if we can move save it 
into the  */
/* next buff. if last one is pa/pb and previous is pb/pa, dont move it to 
the */
/* the next buffer */
