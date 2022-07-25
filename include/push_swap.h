/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   push_swap.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/07 01:39:46 by scristia      #+#    #+#                 */
/*   Updated: 2022/07/25 21:09:22 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	long			number;
	struct s_node	*next;
	struct s_node	*previous;
}	t_node;

/* ************************************************************************** */
/* 							ERROR THROWS									  */
/* ************************************************************************** */

# define ARGC_ERR 1
# define PS_INVALID_CHAR 2
# define EMPTY_STR 3
# define MALLOC_FAIL 4
# define DUPE_CHECK 5
# define INT_LIMIT 6

/* ************************************************************************** */
/* 							INSTRUCTION DEFINES								  */
/* ************************************************************************** */

# define END 0
# define SA 1
# define SB 3
# define SS 4
# define RA 7
# define RB 9
# define RR 16
# define RRA 17
# define RRB 19
# define PA 24
# define PB 25
# define RRR 36

/* ************************************************************************** */
/* 								LIMITS										  */
/* ************************************************************************** */

# define INT_MAX 2147483648
# define INT_MIN -2147483648

/* ************************************************************************** */
/* 							MAIN FUNCTIONS									  */
/* ************************************************************************** */

size_t	check_and_count_tokens(int argc, char **argv);

void	p_err(int err_code);

long	*extract_numbers(char **argv, size_t tokens);

/* ************************************************************************** */
/* 							ALGO FUNCTIONS									  */
/* ************************************************************************** */

void	sort_stack(t_node **stack_a, size_t tokens);

void	sort_two(t_node **stack_a);

void	sort_three(t_node **stack_a);

void	push_from(t_node **src, t_node **dest, int op_code);

void	swap_top(t_node	**head, int op_code);

void	rotate(t_node **head, int op_code);

void	reverse_rotate(t_node	**head, int op_code);

void	print_instructions(int op_code);

size_t	is_sorted(t_node *stack_a);

/* ************************************************************************** */
/* 							LIST FUNCTIONS									  */
/* ************************************************************************** */

void	lst_add_back(t_node **list, t_node *new);

void	lst_add_front(t_node **list, t_node *new);

void	lst_remove_node(t_node **list);

void	free_list(t_node **list);

size_t	lst_size(t_node *list);

t_node	*lst_last(t_node *list);

t_node	*create_node(long number);

t_node	*create_list(long *num_list, size_t tokens);

/* ************************************************************************** */
/* 							STRING FUNCTIONS								  */
/* ************************************************************************** */

void	*ft_memset(void *buff, int c, size_t len);

void	*ft_calloc(size_t count, size_t size);

int		ft_isdigit(char c);

int		ft_issign(char c);

long	ft_atoi(char **str);

/* ************************************************************************** */
/* 								PRINTF										  */
/* ************************************************************************** */

int		ft_printf(const char *format_string, ...);

#endif
