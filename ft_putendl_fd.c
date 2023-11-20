/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 01:31:07 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/20 02:12:23 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int len;

	len = ft_strlen(s);
	write(fd, s, len);
	write(fd, &"\n", 1);
}
