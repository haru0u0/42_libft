/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 20:51:35 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/12/05 15:33:50 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *nptr)
{
	bool	isnegative;
	int		result;

	isnegative = 0;
	result = 0;
	while ((9 <= *nptr && *nptr <= 13) || *nptr == 32)
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			isnegative = 1;
		nptr++;
	}
	while (*nptr != '\0' && (48 <= *nptr && *nptr <= 57))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	if (isnegative == true)
		result = result * -1;
	return (result);
}
