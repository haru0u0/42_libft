/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 21:08:21 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/15 21:47:54 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stddef.h>
#include <stdlib.h>

void *ft_calloc(size_t nmemb, size_t size)
{
	void *mem;
	if (size == 0 || nmemb == 0) 
	{
		return NULL;
	}
	mem = malloc(size * nmemb);
	if (mem == NULL) 
	{
		return NULL; 
	}
	return mem;
}

