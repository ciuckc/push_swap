/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_back.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 02:51:06 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/25 21:00:17 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add_back(t_node **list, t_node *new)
{
	if (list)
	{
		if ((*list)->next == NULL)
		{
			(*list)->next = new;
			(*list)->previous = new;
			((*list)->next)->next = *list;
			((*list)->next)->previous = *list;
		}
		else
		{
			((*list)->previous)->next = new;
			new->previous = (*list)->previous;
			new->next = (*list);
			(*list)->previous = new;
		}
	}
}
