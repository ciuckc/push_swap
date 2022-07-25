/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_back.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 02:51:06 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/25 19:26:15 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add_back(t_node **list, t_node *new)
{
	if (list)
	{
		if (*list)
		{
			((*list)->previous)->next = new;
			new->previous = (*list)->previous;
			new->next = *list;
			(*list)->previous = new;
		}
		else
		{
			*list = new;
			(*list)->next = *list;
			(*list)->previous = *list;
		}
	}
}
