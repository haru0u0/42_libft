/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 16:27:10 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/18 22:08:03 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	char	*dest_cpy;

	if(start > ft_strlen(s) - 1)
	{
		dest = malloc(1);
		return(dest);
	}
	else if (ft_strlen(s) - start < len)
	{
		dest = malloc ((ft_strlen(s) - start) + 1);
	}
	else if (len > (size_t)ft_strlen(s))
	{
		dest = malloc(ft_strlen(s) + 1);
	}
	else
	{
		dest = malloc(len + 1);
	}
	dest_cpy = dest;
	if (dest == NULL)
	{
		return(NULL);
	}
	while (start != 0)
	{
		s++;
		start--;
	}
	while(*s != '\0' && len != 0)
	{
		*dest = *s;
		s++;
		dest++;
		len--;
	}
	*dest = '\0';
	return(dest_cpy);
}
