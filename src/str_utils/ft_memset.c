/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: scristia <scristia@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/06/27 18:07:34 by scristia      #+#    #+#                 */
/*   Updated: 2022/06/27 18:17:33 by scristia      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_memset(void *buff, int c, size_t len)
{
	size_t	i;

	if ((unsigned char *)buff == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		*(((unsigned char *)buff) + i) = (unsigned char)c;
		i++;
	}
	return ((void *)buff);
}
