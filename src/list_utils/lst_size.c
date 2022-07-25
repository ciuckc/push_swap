/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_size.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 03:40:23 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/25 19:35:57 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	lst_size(t_node *list)
{
	size_t	len;
	t_node	*last;

	last = list->previous;
	len = 1;
	while (list != last)
	{
		len++;
		list = list->next;
	}
	return (len);
}
