/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <hsenzaki@student.42.uk>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 17:26:06 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/12/04 01:51:02 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>
#include <string.h>
void	test_memmove()
{
	char	*src1 = "thanks to @apellicc for this test !\r\n";
	char	*src2 = "thanks to @apellicc for this test !\r\n";
	char	dst1[0xF0];
	char	dst2[0xF0];
	int		size = strlen(src1);

	char	*r1 = memmove(dst1, src1, size);
	char	*r2 = ft_memmove(dst2, src2, size);
	printf("original:%s \nmy:%s\n", r1, r2);
}

void	test_strlcat()
{
	char	dest1[] = "rrrrrrrrrrrrrr";
	char	dest2[] = "rrrrrrrrrrrrrr";
	int	res1;
	int	res2;

	res2 = ft_strlcat(dest2, "lorem ipsum dolor sit amet", 5);
	res1 = strlcat(dest1, "lorem ipsum dolor sit amet", 5);
	printf("%d %d\n", res1, res2);
	printf("%s", dest1);
	printf("%s", dest2);
}

void	test_strtrim()
{
	char	str[] = "abcHello Worldcba";
	printf("result of ft_strtrim(abcHello Worldcba, abc): %s\n", ft_strtrim(str, "abc"));
}

int	main()
{
	test_strtrim();
	test_strlcat();
	test_memmove();
	return(0);
}
