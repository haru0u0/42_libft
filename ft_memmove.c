/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:58:45 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/12 17:59:23 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	temp [n + 1];
	char	*dest_cpy;
	char	*src_cpy;
	size_t	count;
	size_t	dx;

	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	count = 0;
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
