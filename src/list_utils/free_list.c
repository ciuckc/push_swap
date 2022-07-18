/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   free_list.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/18 15:55:43 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/18 19:27:01 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_list(t_node **list)
{
	t_node	*last;
	t_node	*previous;

	if ((*list)->next == *list)
	{
		free(*list);
		return ;
	}
	last = (*list)->previous;
	previous = NULL;
	while (*list != last)
	{
		previous = *list;
		*list = (*list)->next;
		free(previous);
	}
	free(last);
}
