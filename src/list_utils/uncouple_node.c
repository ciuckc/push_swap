/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   uncouple_node.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/07/15 21:24:02 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/15 21:29:06 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	lst_uncouple_node(t_node **lst)
{
	if ((*lst)->next == *lst)
		*lst = NULL;
	else
	{
		((*lst)->next)->previous = (*lst)->previous;
		((*lst)->previous)->next = (*lst)->next;
		*lst = (*lst)->next;
	}
}
