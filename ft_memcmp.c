/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:34:51 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/18 18:38:37 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>
#include<stdio.h>
int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	//unsigned char	*s1_casted;
	//unsigned char	*s2_casted;
	while (n != 0)
	{
		if (*((unsigned char *)s1) != *((unsigned char *)s2))
		{
			return (*((unsigned char *)s1) - *((unsigned char *)s2));
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

