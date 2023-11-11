/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 18:35:01 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/11 19:54:08 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*dest_cpy;
	char	*src_cpy;
	dest_cpy = (char *)dest;
	src_cpy = (char *)src;

	while (n != 0)
	{
		*dest_cpy = *src_cpy;
		dest_cpy++;
		src_cpy++;
		n--;
	}
	return (dest);
}
