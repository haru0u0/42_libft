/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:58:45 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/23 16:29:08 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp [n + 1];
	char	*dest_cpy;
	char	*src_cpy;
	size_t	dx;

	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	dx = 0;
	while (dx < n)
	{
		temp[dx] = *src_cpy;
		src_cpy++;
		dx++;
	}
	temp[dx] = '\0';
	dx = 0;
	while (dx < n)
	{
		*dest_cpy = temp[dx];
		dest_cpy++;
		dx++;
	}
	return (dest);
}
