/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <hsenzaki@student.42.uk>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:26:06 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/23 21:10:18 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	test_strtrim()
{
	char	str[] = "abcHello Worldcba";
	printf("result of ft_strtrim(abcHello Worldcba, abc): %s\n", ft_strtrim(str, "abc"));
}

int	main()
{
	test_strtrim();
	return(0);
}
