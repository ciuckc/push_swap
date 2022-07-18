/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   remove_node.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 21:24:02 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/18 20:36:26 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_remove_node(t_node **list)
{
	t_node	*tmp;

	tmp = NULL;
	if ((*list)->next == *list)
	{
		free(*list);
		*list = NULL;
	}
	else
	{
		tmp = (*list)->next;
		((*list)->previous)->next = (*list)->next;
		((*list)->next)->previous = (*list)->previous;
		free(*list);
		*list = tmp;
	}
}
