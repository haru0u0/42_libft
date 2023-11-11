/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 19:58:45 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/11 21:10:23 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>
#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;
	char	*dest_cpy;
	char	*src_cpy;
	size_t	count;

	temp = NULL;
	dest_cpy = (char *)dest;
	src_cpy = (char *)src;
	count = 0;

	/*
	while (count < n)
	{
		*temp = *src_cpy;
		temp++;
		src_cpy++;
		count++;
	}
	*temp = '\0';
	printf("%s", temp);
	count = 0;
	while (count < n)
	{
		*dest_cpy = *temp;
		dest_cpy++;
		temp++;
		count++;
	}
	*/
	return (dest);
}
