/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   create_list.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/19 05:42:53 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/23 18:27:43 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_list_if_null(t_node **head, t_node *tmp, long *num_list)
{
	t_node	*previous;

	previous = *head;
	if (tmp == NULL)
	{
		free(num_list);
		while (*head)
		{
			*head = (*head)->next;
			free(previous);
			previous = *head;
		}
		p_err(MALLOC_FAIL);
	}
}

static void	map_to_create_node(t_node **head, long *num_list, size_t list_len)
{
	t_node	*tmp;
	size_t	i;

	tmp = NULL;
	i = 0;
	while (i < list_len)
	{
		tmp = create_node(num_list[i]);
		free_list_if_null(head, tmp, num_list);
		if (!(*head))
			*head = tmp;
		else
			lst_add_back(head, tmp);
		i++;
	}
	if (i == list_len)
	{
		(*head)->previous = tmp;
		tmp->next = *head;
	}
}

t_node	*create_list(long *num_list, size_t tokens)
{
	t_node	*head;

	head = NULL;
	map_to_create_node(&head, num_list, tokens);
	return (head);
}
