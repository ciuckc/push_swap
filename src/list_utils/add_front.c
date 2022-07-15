/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_front.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 18:37:01 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/15 21:30:42 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add_front(t_node **list, t_node *new)
{
	if (*list == NULL)
	{
		*list = new;
		(*list)->next = *list;
		(*list)->previous = *list;
	}
	else
	{
		new->next = *list;
		new->previous = (*list)->previous;
		*list = new;
		((*list)->next)->previous = *list;
		((*list)->previous)->next = *list;
	}
}
