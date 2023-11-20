/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:01:20 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 02:19:11 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	s++;
	count++;
	while (count >= 0)
	{
		if (*s == (c % 256))
		{
			return ((char *)s);
		}
		s--;
		count--;
	}
	return (NULL);
}
