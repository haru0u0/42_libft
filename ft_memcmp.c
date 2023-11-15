/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:34:51 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/15 20:49:55 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *s1_casted;
	char *s2_casted;

	s1_casted = (char *)s1;
	s2_casted = (char *)s2;

	while ((*s1_casted != '\0' || *s2_casted != '\0') && n != 0)
	{
		if (*s1_casted != *s2_casted)
		{
			return (*s1_casted - *s2_casted);
		}
		s1_casted++;
		s2_casted++;
		n--;
	}
	return (0);
}

