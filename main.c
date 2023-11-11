/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:30:32 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/11 20:50:31 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <strings.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t	ft_strlen(const char *s);
void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);

void test_ft_memmove()
{
	char	str1[] = "hello world";
	char	str2[] = "hello world";
	printf("\n------------------ft_memmove--------------------\n");
	memmove (str1+6, str1, 5);
	ft_memmove (str2+6, str2, 5);
	printf("str: hello world\nresult of memmove (str1+6, str1, 5):%s\nresult of ft_memmove (str1+6, str1, 5):%s", str1, str2);
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
	printf ("src str: hello world\nresult of memcpy (dest, src, strlen(src)): %s\nresult of ft_memcpy (dest, src, strlen(src)): %s", dest1, dest2);
}

void	test_ft_isalpha()
{
	int i;

	i = 0;
	printf("------------------ft_isalpha--------------------\n");
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
	printf("------------------ft_isdigit--------------------\n");
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
	printf("------------------ft_isalnum--------------------\n");
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
	printf("------------------ft_isascii--------------------\n");
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
	printf("------------------ft_isprint--------------------\n");
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

	printf("------------------ft_strlen--------------------\n");
	printf("input: strlen, ft_strlen\n");
	printf("hello: %zu, %zu\n", strlen(c), ft_strlen(c));
}

void	test_ft_memset()
{
	char str1[] = "hello world";
	char str2[] = "hello world";
	memset (str1, '-', 5);
	ft_memset (str2, '-', 5);
	printf("------------------ft_memset--------------------\n");
	printf ("original str: hello world\nresult of memset (str, '-', 5): %s\nresult of ft_memset (str, '-', 5): %s\n", str1, str2);
}

void	test_ft_bzero()
{
	char	str1[] = "hello world";
	char	str2[] = "hello world";
	int	dx = 0;
	bzero(str1, 5);
	ft_bzero(str2, 5);
	printf("------------------ft_bzero--------------------\n");
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
	return (0);
}


