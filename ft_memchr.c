/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:38:25 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 02:10:54 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
	while(n != 0)
	{
		if (*((char *)s) == (char)c)
		{
			return ((void *)s);
		}
		n--;
		s++;
	}
	return (NULL);
}
