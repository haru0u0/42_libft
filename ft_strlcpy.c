/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 20:49:47 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/12 21:15:02 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	srclen;

	srclen = ft_strlen (src);
	while (size != 1 && *src != '\0')
	{
		*dst = *src;
		dst++;
		src++;
		size--;
	}
	*dst = '\0';
	return(srclen);
}

