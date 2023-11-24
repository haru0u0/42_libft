/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <hsenzaki@student.42.uk>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 18:18:58 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/23 21:45:08 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
int	trimlen(char const *start, char const *end)
{
	int	count;

	count = 0;
	while (start != end + 1)
	{
		count++;
		start++;
	}
	return (count);
}

char const	*lastcharacter(char const *s1, char const *set)
{
	int	count;
	char const	*set_cpy;
	bool	ismatched;

	count = 0;
	set_cpy = set;
	ismatched = false;
	//printf("s1:%s\n", s1);
	while (*s1 != 0)
	{
		count++;
		s1++;
	}
	s1--;
	while (count != 0)
	{
		while(*set != 0)
		{
			if (*s1 == *set)
			{
				ismatched = true;
			}
			set++;
		}
		if (ismatched == false)
		{
			return(s1);
		}
		set = set_cpy;
		ismatched = false;
		count--;
		s1--;
	}
	return (s1);
}

char const	*firstcharacter(char const *s1, char const *set)
{
	char const	*set_cpy;
	bool	ismatched;

	set_cpy = set;
	ismatched = false;
	while (*s1 != 0)
	{
		while(*set != 0)
		{
			if(*s1 == *set)
			{
				ismatched = true;
			}
			set++;
		}
		if(ismatched == false)
		{
			return(s1);
		}
		set = set_cpy;
		ismatched = false;
		s1++;
	}
	return(s1);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char	*dest;
	char	*dest_cpy;
	char const	*start;
	char const	*end;

	start = firstcharacter(s1, set);
	if (*start == '\0')
	{
		dest = malloc(sizeof(char));
		*dest = '\0';
		return(dest);
	}
	//printf("start: %c\n", *start);
	end = lastcharacter(s1, set);
	//printf("end: %s\n", end);
	dest = malloc((trimlen(start, end) + 1) * sizeof(char));
	//printf("trimlen: %d\n", trimlen(start, end));
	if (dest == NULL)
	{
		return(NULL);
	}
	dest_cpy = dest;
	while (start != end + 1)
	{
		//printf("copied start: %c\n", *start);
		*dest = *((char *)start);
		//printf("copied dest: %c\n", *dest);
		//printf("dest_cpy: %s\n", dest_cpy);
		start++;
		dest++;
	}
	*dest = '\0';
	return(dest_cpy);
}
