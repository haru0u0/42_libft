/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:30:32 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/12 21:38:17 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>
#include <bsd/string.h>
#include <ctype.h>
#include "libft.h"

void test_ft_tolower()
{
	int i;

	i = 0;
	printf("\n------------------ft_tolower--------------------\n");
	printf("input: tolower, ft_tolower\n");
	while (i <= 127)
	{
		printf("%i: %c, %c\n", i, tolower(i), ft_tolower (i));
		i++;
	}
}

void test_ft_toupper()
{
	int i;

	i = 0;
	printf("\n------------------ft_toupper--------------------\n");
	printf("input: tolower, ft_toupper\n");
	while (i <= 127)
	{
		printf("%d: %c, %c\n", i, toupper(i), ft_toupper (i));
		i++;
	}
}

void test_ft_strlcat()
{
	char	str1[20] = "Hello_";
	char	str2[] = "world";
	char	str3[20] = "Hello_";
	char	str4[] = "world";
	int	strlcat_rtn;
	int	ftstrlcat_rtn;

	strlcat_rtn = strlcat (str1, str2, 3);
	ftstrlcat_rtn = ft_strlcat (str3, str4, 3);

	printf("\n------------------ft_strlcat--------------------\n");
	printf ("return value of strlcat(Hello_, world, 8):%d\n", strlcat_rtn);
	printf ("return value of ft_strlcat(Hello_, world, 8): %d\n", ftstrlcat_rtn);
	printf ("result of strlcat(Hello_, world, 8):%s\n", str1);
	printf ("result of ft_strlcat(Hello_, world, 8):%s\n", str3);
}

void test_ft_strlcpy()
{
	char	str1[] = "Hello_";
	char	str2[] = "world";
	char	str3[] = "Hello_";
	char	str4[] = "world";
	int	strlcpy_rtn;
	int	ftstrlcpy_rtn;

	strlcpy_rtn = strlcpy (str1, str2, 9);
	ftstrlcpy_rtn = ft_strlcpy (str3, str4, 9);

	printf("\n------------------ft_strlcpy--------------------\n");
	printf ("return value of strlcpy(Hello_, world, 3):%d\n", strlcpy_rtn);
	printf ("return value of ft_strlcpy(Hello_, world, 3): %d\n", ftstrlcpy_rtn);
	printf ("result of strlcpy(Hello_, world, 3):%s\n", str1);
	printf ("result of ft_strlcpy(Hello_, world, 3):%s\n", str3);


}

void test_ft_memmove()
{
	char	str1[] = "hello world";
	char	str2[] = "hello world";
	printf("\n------------------ft_memmove--------------------\n");
	memmove (str1 + 6, str1, 5);
	ft_memmove (str2 + 6, str2, 5);
	printf("str: hello world\nresult of memmove (str1+6, str1, 5):%s\nresult of ft_memmove (str1+6, str1, 5):%s\n", str1, str2);
}

void test_ft_memcpy()
{
	char	src1[] = "hello world";
	char	dest1[12];
	char	src2[] = "hello world";
	char	dest2[12];
	memcpy (dest1, src1, strlen(src1));
	ft_memcpy (dest2, src2, strlen(src2));
	printf("\n------------------ft_memcpy--------------------\n");
	printf ("src str: hello world\nresult of memcpy (dest, src, strlen(src)): %s\nresult of ft_memcpy (dest, src, strlen(src)): %s\n", dest1, dest2);
}

void	test_ft_isalpha()
{
	int i;

	i = 0;
	printf("\n------------------ft_isalpha--------------------\n");
	printf("input: isalpha, ft_isalpha\n");
	while (i <= 127)
	{
		printf("%d: %d, %d\n", i, (isalpha (i)), (ft_isalpha (i)));
		i++;
	}
}

void	test_ft_isdigit()
{
	int i;

	i = 0;
	printf("\n------------------ft_isdigit--------------------\n");
	printf("input: isdigit, ft_isdigit\n");
	while (i <= 127)
	{
		printf("%d: %d, %d\n", i, (isdigit (i)), (ft_isdigit (i)));
		i++;
	}
}

void	test_ft_isalnum()
{
	int i;

	i = 0;
	printf("\n------------------ft_isalnum--------------------\n");
	printf("input: isalnum, ft_isalnum\n");
	while (i <= 127)
	{
		printf("%d: %d, %d\n", i, (isalnum (i)), (ft_isalnum (i)));
		i++;
	}
}


void	test_ft_isascii()
{
	int i;

	i = 0;
	printf("\n------------------ft_isascii--------------------\n");
	printf("input: isascii, ft_isascii\n");
	while (i <= 127)
	{
		printf("%d: %d, %d\n", i, (isascii (i)), (ft_isascii (i)));
		i++;
	}
}

void	test_ft_isprint()
{
	int i;

	i = 0;
	printf("\n------------------ft_isprint--------------------\n");
	printf("input: isprint, ft_isprint\n");
	while (i <= 127)
	{
		printf("%d: %d, %d\n", i, (isprint (i)), (ft_isprint (i)));
		i++;
	}
}

void	test_ft_strlen()
{
	const char c[] = "hello";

	printf("\n------------------ft_strlen--------------------\n");
	printf("input: strlen, ft_strlen\n");
	printf("hello: %zu, %zu\n", strlen(c), ft_strlen(c));
}

void	test_ft_memset()
{
	char str1[] = "hello world";
	char str2[] = "hello world";
	memset (str1, '-', 5);
	ft_memset (str2, '-', 5);
	printf("\n------------------ft_memset--------------------\n");
	printf ("original str: hello world\nresult of memset (str, '-', 5): %s\nresult of ft_memset (str, '-', 5): %s\n", str1, str2);
}

void	test_ft_bzero()
{
	char	str1[] = "hello world";
	char	str2[] = "hello world";
	int	dx = 0;
	bzero(str1, 5);
	ft_bzero(str2, 5);
	printf("\n------------------ft_bzero--------------------\n");
	printf ("original str: hello world\nresult of bzero(str, 5):");

	while (str1[dx] == '\0')
	{
		printf("0");
		dx++;
	}
	while (str1[dx] != '\0')
	{
		printf("%c", str1[dx]);
		dx++;
	}

	printf ("\nresult of ft_bzero(str, 5):");
	dx = 0;
	while (str2[dx] == '\0')
	{
		printf("0");
		dx++;
	}
	while (str2[dx] != '\0')
	{
		printf("%c", str2[dx]);
		dx++;
	}

	printf("\n");
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	test_ft_memset();
	test_ft_bzero();
	test_ft_memcpy();
	test_ft_memmove();
	test_ft_strlcpy();
	test_ft_strlcat();
	test_ft_toupper();
	test_ft_tolower();
	return (0);
}


