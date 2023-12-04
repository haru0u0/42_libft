/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:58:45 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/12/03 23:51:49 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	dx;
	char	*dest_cpy;
	char	*src_cpy;

	dx = 0;
	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	if (dest == NULL && src == NULL)
	{
		return (NULL);
	}
	if (dest == src)
	{
		return (dest);
	}
	else if(dest < src)
	{
		while (dx < n)
		{
			dest_cpy [dx] = src_cpy [dx];
			dx++;
		}
	}
	else
	{
		dx = n;
		while (dx != 0)
		{
			dx--;
			dest_cpy[dx] = src_cpy[dx];
		}
	}
	return (dest);
}
