/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   instruction_set.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 18:03:14 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/15 21:29:59 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_from(t_node **src, t_node **dest)
{
	lst_add_front(dest, *src);
	lst_uncouple_node(src);
}

void	swap_top(t_node	**head)
{
	long	tmp;

	tmp = (*head)->next->number;
	(*head)->next->number = (*head)->number;
	(*head)->number = tmp;
}

void	rotate(t_node **head)
{
	(*head) = (*head)->next;
}

void	reverse_rotate(t_node **head)
{
	(*head) = (*head)->previous;
}

/* check if one of them is null, otherwise link whatever is necessarry(push) */
/* use defines of the instructions and pass them to a function 
with buffer */
/* if buffer is full check the last one to see if we can move save it 
into the  */
/* next buff. if last one is pa/pb and previous is pb/pa, dont move it to 
the */
/* the next buffer */
