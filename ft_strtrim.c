/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:45:38 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/19 17:34:52 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdbool.h>

char *ft_strtrim(char const *s1, char const *set)
{
	char		*dest;
	bool		isTrim;
	size_t			trimCount;
	char const	*s1_cpy;
	char const	*set_cpy;
	char		*dest_cpy;

	isTrim = false;
	s1_cpy = s1;
	set_cpy = set;
	trimCount = 0;

	while(*s1 != '\0')
	{
		isTrim = 0;
		set = set_cpy;
		while(*set != '\0')
		{
			if(*s1 == *set)
			{
				isTrim = 1;
			}
			set++;
		}
		if (isTrim == 1)
		{
			trimCount++;
		}
		s1++;
	}
	s1 = s1_cpy;
	set = set_cpy;
	//printf("strlen(s1):%zu, trimCount:%zu\n", ft_strlen(s1), trimCount);
	dest = malloc(ft_strlen(s1) - trimCount +1);
	if(dest == NULL)
	{
		return(NULL);
	}
	else
	{
		dest_cpy = dest;
	}
	while(*s1 != '\0')
	{
		isTrim = 0;
		set = set_cpy;
		while(*set != '\0')
		{
			if(*s1 == *set)
			{
				isTrim = 1;
			}
			set++;
		}
		if(isTrim == 0)
		{
			*dest = *s1;
			dest++;
		}
		s1++;
	}
	*dest = '\0';
	return(dest_cpy);
}
