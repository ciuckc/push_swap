/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   lst_size.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/20 03:40:23 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/20 03:41:56 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	lst_size(t_node *list)
{
	size_t	len;

	len = 0;
	while (list)
	{
		list = list->next;
		len++;
	}
	return (len);
}
