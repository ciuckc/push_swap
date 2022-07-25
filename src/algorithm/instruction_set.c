/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   instruction_set.c                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 18:03:14 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/25 21:17:08 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_instructions(int op_code)
{
	static int	previous_op;
	char		**table;

	table = (char *[]){[SA] = "sa", [SB] = "sb", [SS] = "ss", [RA] = "ra", \
	[RB] = "rb", [RR] = "rr", [RRA] = "rra", [RRB] = "rrb", [RRR] = "rrr", \
	[PA] = "pa", [PB] = "pb"};
	if (!previous_op)
		previous_op = op_code;
	else if (op_code == END)
		ft_printf("%s\n", table[previous_op]);
	else if (previous_op - op_code == 2 || previous_op - op_code == -2)
	{
		ft_printf("%s\n", table[previous_op + op_code]);
		previous_op = 0;
	}
	else
	{
		ft_printf("%s\n", table[previous_op]);
		previous_op = op_code;
	}
}

void	push_from(t_node **src, t_node **dest, int op_code)
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
	print_instructions(op_code);
}

void	swap_top(t_node	**head, int op_code)
{
	long	temp;

	if ((*head)->next == *head)
		return ;
	temp = (*head)->number;
	(*head)->number = ((*head)->next)->number;
	((*head)->next)->number = temp;
	print_instructions(op_code);
}

void	rotate(t_node **head, int op_code)
{
	if ((*head)->next == *head)
		return ;
	*head = (*head)->next;
	print_instructions(op_code);
}

void	reverse_rotate(t_node	**head, int op_code)
{
	if ((*head)->next == *head)
		return ;
	*head = (*head)->previous;
	print_instructions(op_code);
}
