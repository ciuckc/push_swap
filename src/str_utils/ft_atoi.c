/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/17 17:02:29 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/17 18:41:38 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	ft_isspace(int c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ');
}

long	ft_atoi(char **str)
{
	long	sign;
	long	i;

	sign = 1;
	i = 0;
	while (ft_isspace(**str))
		(*str)++;
	while (ft_issign(**str))
	{
		if (**str == '-')
			sign *= -1;
		(*str)++;
		if (ft_issign(**str))
			return (0);
	}
	while (ft_isdigit(**str))
	{
		i = i * 10 + (**str - '0');
		(*str)++;
	}
	return (sign * i);
}
