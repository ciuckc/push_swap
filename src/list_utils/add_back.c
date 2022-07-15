/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   add_back.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 02:51:06 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/20 05:07:43 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_add_back(t_node **list, t_node *new)
{
	t_node	*last;

	last = NULL;
	if (list)
	{
		if (*list)
		{
			last = lst_last(*list);
			new->previous = last;
			last->next = new;
		}
		else
			*list = new;
	}
}
