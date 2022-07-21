/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   instruction_set.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 18:03:14 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/20 20:21:56 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_from(t_node **src, t_node **dest, size_t op_code)
{
	t_node	*new;

	if (*src == NULL)
		return ;
	new = create_node((*src)->number);
	if (new == NULL)
	{
		free_list(src);
		if (*dest)
			free_list(dest);
		p_err(MALLOC_FAIL);
	}
	lst_add_front(dest, new);
	lst_remove_node(src);
	if (op_code == PA)
		ft_printf("pa\n");
	else
		ft_printf("pb\n");
}

static void	swap_values(t_node **head)
{
	long	tmp;

	tmp = (*head)->number;
	(*head)->number = ((*head)->next)->number;
	((*head)->next)->number = tmp;
}

void	swap_top(t_node	**head_a, t_node **head_b, size_t op_code)
{
	if ((op_code == SA && (*head_a)->next == *head_a) \
	|| (op_code == SB && (*head_b)->next == *head_b))
		return ;
	if (op_code == SS)
	{
		swap_values(head_a);
		swap_values(head_b);
		ft_printf("ss\n");
	}
	else if (op_code == SA)
	{
		swap_values(head_a);
		ft_printf("sa\n");
	}
	else if (op_code == SB)
	{
		swap_values(head_b);
		ft_printf("sb\n");
	}
}

void	rotate(t_node **head_a, t_node **head_b, size_t op_code)
{
	if ((op_code == RA && (*head_a)->next == *head_a) \
	|| (op_code == RB && (*head_b)->next == *head_b))
		return ;
	if (op_code == RR)
	{
		*head_a = (*head_a)->next;
		*head_b = (*head_b)->next;
		ft_printf("rr\n");
	}
	else if (op_code == RA)
	{
		*head_a = (*head_a)->next;
		ft_printf("ra\n");
	}
	else if (op_code == RB)
	{
		*head_b = (*head_b)->next;
		ft_printf("rb\n");
	}
}

void	reverse_rotate(t_node	**head_a, t_node **head_b, size_t op_code)
{
	if ((op_code == RRA && (*head_a)->next == *head_a) \
	|| (op_code == RRB && (*head_b)->next == *head_b))
		return ;
	if (op_code == RRR)
	{
		*head_a = (*head_a)->previous;
		*head_b = (*head_b)->previous;
		ft_printf("rrr\n");
	}
	else if (op_code == RRA)
	{
		*head_a = (*head_a)->previous;
		ft_printf("rra\n");
	}
	else if (op_code == RRB)
	{
		*head_b = (*head_b)->previous;
		ft_printf("rb\n");
	}
}
