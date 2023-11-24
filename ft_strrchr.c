/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 22:01:20 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/23 17:06:09 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;
char *s_copy;

s_copy =(char *)s;
	count = 0;
	while (*s_copy != '\0')
	{
		s_copy++;
		count++;
	}
if (c == '\0')
{
return(s_copy + 1);
}
	
	
	while (count >= 0)
	{
		if (*s_copy == (c % 256))
		{
			return (s_copy);
		}
		s_copy--;
		count--;
	}
	return (NULL);
}
