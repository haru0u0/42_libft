/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:38:10 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 02:04:37 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	char	chara;
	char	lastdigit;
	bool	isIntmin;
	bool	isNegative;

	chara = 'a';
	lastdigit = 'a';
	isIntmin = false;
	isNegative = false;
	if (n < 0)
	{
		if (n == INT_MIN)
		{
			write (fd, "-2147483648", 11);
			return;
		}
		n = n * -1;
		write (fd, &"-", 1);
	}

	if (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		chara = n + '0';
		write(fd, &chara, 1);
	}
}
