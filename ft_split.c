/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 05:14:10 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/12/04 01:21:45 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

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

	if(s[sdx] != '\0')
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
	if(s[sdx - 1] != c)
	{
		dest[adx][cdx] = '\0';
	}
	return(dest);
}
