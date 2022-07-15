/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_node.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/15 20:33:01 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/15 23:49:06 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_node	*create_node(long number)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (new == NULL)
		return (NULL);
	new->number = number;
	new->next = NULL;
	new->previous = NULL;
	return (new);
}
