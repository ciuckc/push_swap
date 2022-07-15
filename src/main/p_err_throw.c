/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   p_err_throw.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/12 23:24:06 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/13 05:23:42 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	p_err(int err_code)
{
	write(1, "Error!", 6);
	exit(err_code);
}
