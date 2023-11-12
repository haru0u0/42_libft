/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 18:06:35 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/12 21:43:18 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	short_dest(size_t size, const char *src)
{
	size_t	count;

	count = 0;
	while (size > 0)
	{
		size--;
		count++;
	}
	while (*src != '\0')
	{
		src++;
		count++;
	}
	return (count);
}

size_t	long_dest(size_t count,
		size_t size, char *dest, const char *src)
{
	while (*src != '\0' && size - 1 > count)
	{
		*dest = *src;
		dest++;
		src++;
		count++;
	}
	while (*src != '\0')
	{
		src++;
		count++;
	}
	*dest = '\0';
	return (count);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	count;

	count = 0;
	while (*dst != '\0')
	{
		dst++;
		count++;
	}
	if (count >= size)
	{
		count = short_dest (size, src);
	}
	else if (size > count)
	{
		count = long_dest (count, size, dst, src);
	}
	return (count);
}
