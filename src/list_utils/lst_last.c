/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_last.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 03:23:55 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/20 04:59:38 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*lst_last(t_node *list)
{
	t_node	*tmp;
	size_t	list_len;

	tmp = list;
	list_len = lst_size(list);
	while (list_len > 1)
	{
		tmp = tmp->next;
		list_len--;
	}
	return (tmp);
}
