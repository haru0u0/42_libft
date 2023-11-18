/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:51:35 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/18 19:59:44 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdbool.h>

int ft_atoi(const char *nptr)
{
	bool	isNegative;
	int	result;

	isNegative = 0;
	result = 0;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == 32)
	{
		nptr++;
	}
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
		{
			isNegative = 1;
		}
		nptr++;
	}
	while (*nptr != '\0' && (48 <= *nptr && *nptr <= 57))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	if (isNegative == true)
	{
		result = result * -1;
	}
	return (result);
}

