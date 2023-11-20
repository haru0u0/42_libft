/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:45:38 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 02:33:23 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*dest;
	bool		is_trim;
	size_t		trim_count;
	char const	*s1_cpy;
	char const	*set_cpy;
	char		*dest_cpy;

	is_trim = false;
	s1_cpy = s1;
	set_cpy = set;
	trim_count = 0;

	while(*s1 != '\0')
	{
		is_trim = 0;
		set = set_cpy;
		while(*set != '\0')
		{
			if(*s1 == *set)
				is_trim = 1;
			set++;
		}
		if (is_trim == 1)
			trim_count++;
		s1++;
	}
	s1 = s1_cpy;
	set = set_cpy;
	dest = malloc(ft_strlen(s1) - trim_count +1);
	if(dest == NULL)
		return(NULL);
	else
		dest_cpy = dest;
	while(*s1 != '\0')
	{
		is_trim = 0;
		set = set_cpy;
		while(*set != '\0')
		{
			if(*s1 == *set)
				is_trim = 1;
			set++;
		}
		if(is_trim == 0)
		{
			*dest = *s1;
			dest++;
		}
		s1++;
	}
	*dest = '\0';
	return(dest_cpy);
}
