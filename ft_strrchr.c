/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:01:20 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/13 22:39:49 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strrchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (*s != '\0')
	{
		s++;
		count++;
	}
	if (c == '\0')
	{
		return ((char *)s + 1);
	}

	while (count != 0)
	{
		if (*s == c)
		{
			return ((char *)s);
		}
		s--;
		count--;
	}

	return (NULL);
}

