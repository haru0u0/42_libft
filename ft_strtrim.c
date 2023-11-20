/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 16:45:38 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 03:21:45 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

bool	istrim(char const *s1, char const *set)
{
	while (*set != '\0')
	{
		if (*s1 == *set)
		{
			return (true);
		}
		set++;
	}
	return (false);
}

int	ft_trimcount(char const *s1, char const *set)
{
	size_t	trimcount;

	trimcount = 0;
	while (*s1 != '\0')
	{
		if (istrim (s1, set) == 1)
		{
			trimcount++;
		}
		s1++;
	}
	return (trimcount);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int			trimcount;
	char		*dest;
	char const	*s1_cpy;
	char const	*set_cpy;
	char		*dest_cpy;

	trimcount = 0;
	s1_cpy = s1;
	set_cpy = set;
	trimcount = ft_trimcount(s1, set);
	dest = malloc(ft_strlen(s1) - trimcount +1);
	if (dest == NULL)
		return (NULL);
	dest_cpy = dest;
	while (*s1 != '\0')
	{
		if (istrim (s1, set) == 0)
		{
			*dest = *s1;
			dest++;
		}
		s1++;
	}
	*dest = '\0';
	return (dest_cpy);
}
