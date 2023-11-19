/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:35:28 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/19 22:43:49 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "libft.h"
char **ft_split(char const *s, char c)
{
	int	row;
	char	**dest;
	int adx;
	int cdx;
	int sdx;
	int column;
	bool isEmpty;

	row = 0;
	adx = 0;
	cdx = 0;
	sdx = 0;
	column = 0;
	isEmpty = true;


	if(s[sdx] != 0)
	{
		while(s[sdx] == c)
		{
			sdx++;
		}
		while (sdx < (int)ft_strlen(s))
		{
			if (s[sdx] == c)
			{
				row++;
				while(s[sdx] == c)
				{
					sdx++;
				}
			}
			else
			{
				isEmpty = false;
				sdx++;
			}
		}
		if(s[sdx - 1] != c && isEmpty == false)
		{
			row++;
		}
	}

	dest = malloc((row + 1) * sizeof(char *));
	if(dest == NULL)
	{
		return(NULL);
	}

	sdx = 0;
	if(s[sdx] != 0)
	{
		while(s[sdx] == c)
		{
			sdx++;
		}
		while (adx < row)
		{
			while(s[sdx] != c && s[sdx] != '\0')
			{
				column++;
				sdx++;
			}
			dest[adx] = malloc((column + 1) * sizeof(char));
			if(dest[adx] == NULL)
			{
				free(dest[adx]);
				return(NULL);
			}
			while(s[sdx] == c)
			{
				sdx++;
			}
			adx++;
			column = 0;
		}
	}
	else
	{
		dest[0] = NULL;
		return(dest);
	}
	dest[adx] = NULL;

	sdx = 0;
	adx = 0;
	while(s[sdx] == c)
	{
		sdx++;
	}
	while(s[sdx] != '\0')
	{
		if(s[sdx] != c)
		{
			dest[adx][cdx] = s[sdx];
			cdx++;
			sdx++;
		}
		else if(s[sdx] == c)
		{
			dest[adx][cdx] = '\0';
			adx++;
			cdx = 0;
			while (s[sdx] == c)
			{
				sdx++;
			}
		}
	}
	return(dest);
}