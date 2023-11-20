/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 22:50:26 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 06:27:55 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_itoa(int n)
{
	char	*dest;
	int		digit;
	bool	isnegative;
	bool	isintmin;
	int		n_cpy;

	digit = 0;
	isnegative = false;
	isintmin = false;
	if (n < 0)
	{
		if (n == -2147483648)
		{
			isintmin = true;
			n = (n + 1) * -1;
		}
		else
		{
			n = n * -1;
		}
		digit++;
		isnegative = true;
	}
	n_cpy = n;
	if (n == 0)
	{
		digit++;
	}
	while (n != 0)
	{
		n = n / 10;
		digit++;
	}
	dest = malloc((digit + 1) * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	while (digit != 0)
	{
		dest++;
		digit--;
	}
	*dest = '\0';
	dest--;
	n = n_cpy;
	if (n == 0)
	{
		dest = "0";
		return (dest);
	}
	if (isintmin == true)
	{
		*dest = ((n % 10) + 1) + '0';
		n = n / 10;
		dest--;
	}
	while (n != 0)
	{
		*dest = (n % 10) + '0';
		n = n / 10;
		dest--;
	}
	if (isnegative == true)
	{
		*dest = '-';
	}
	else
	{
		dest++;
	}
	return (dest);
}
