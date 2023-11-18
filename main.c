/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:30:32 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/18 20:38:52 by hsenzaki         ###   ########.fr       */
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
#include <stdint.h>
#include <limits.h>

void test_ft_strdup()
{
	char	src1[] = "Hello World";
	char	src2[] = "Hello World";
	char	*target1 = strdup(src1);
	char	*target2 = ft_strdup(src2);

	printf("\n------------------ft_strdup--------------------\n");
	printf ("params: strdup, ft_strdup\n");
	printf("Hello World: %s, %s", target1, target2);
}

void test_ft_calloc()
{
	int i, n;
	int *a;

	printf("\n------------------ft_calloc--------------------\n");
	printf("Number of elements to be entered:");
	scanf("%d",&n);
	a = (int*)ft_calloc(n, sizeof(int));
	printf("Enter %d numbers:\n",n);
	for( i=0 ; i < n ; i++ )
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers entered are: ");
	for( i=0 ; i < n ; i++ )
	{
	printf("%d ",a[i]);
	}
	free( a );
	printf("\n%s, %s\n", (char *)calloc(SIZE_MAX, SIZE_MAX), (char *)ft_calloc(SIZE_MAX, SIZE_MAX));
	printf("SIZE_MAX: %lu\n", SIZE_MAX);
	printf("INT_MAX: %d\n", INT_MAX);
	printf("SIZE_MAX * SIZE_MAX: %lu\n", SIZE_MAX * SIZE_MAX);
	printf("SIZE_MAX * SIZE_MAX: %lu\n", 18446744073709551615 * 18446744073709551615);
	if (SIZE_MAX * SIZE_MAX > INT_MAX)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}

void test_ft_atoi()
{
	char e[] = {9, 10, 11, 12, 13, '1', 0};

	printf("\n------------------ft_atoi--------------------\n");
	printf ("param: atoi, ft_atoi\n");
	printf ("123: %d, %d\n", atoi("123"), ft_atoi("123"));
	printf ("1a3: %d, %d\n", atoi("1a3"), ft_atoi("1a3"));
	printf ("0: %d, %d\n", atoi("0"), ft_atoi("0"));
	printf ("a: %d, %d\n", atoi("a"), ft_atoi("a"));
	printf ("1: %d, %d\n", atoi("1"), ft_atoi("1"));
	printf ("+1: %d, %d\n", atoi("+1"), ft_atoi("+1"));
	printf ("-1: %d, %d\n", atoi("-1"), ft_atoi("-1"));
	printf ("  -1: %d, %d\n", atoi("  -1"), ft_atoi("  -1"));
	printf ("9, 10, 11, 12, 13, '1', 0: %d, %d\n", atoi(e), ft_atoi(e));
}

void test_ft_strnstr()
{
	char big[] = "Hello World";
	char little[] = "Wo";

	printf("\n------------------ft_strnstr--------------------\n");
	printf ("params: strnstr, ft_strnstr\n");
	printf("Hello World, Wo, 5: %s, %s\n", strnstr(big, little, 5), ft_strnstr(big, little, 5));
	printf("Hello World, Wo, 12: %s, %s\n", strnstr(big, little, 12), ft_strnstr(big, little, 12));
	printf("Hello World, Wo, 7: %s, %s\n", strnstr(big, little, 7), ft_strnstr(big, little, 7));
	printf("Wo, Hello World, 7: %s, %s\n", strnstr(little, big, 7), ft_strnstr(little, big, 7));
	printf("Hello World, "", 7: %s, %s\n", strnstr(big, "", 7), ft_strnstr(big, "", 7));
}

void test_ft_memcmp()
{
	char s[] = {127, 0, 127, 0};
	char s2[] = {42, 0, 42, 0};
	printf ("\n------------------ft_memcmp--------------------\n");
	printf ("params: memcmp, ft_memcmp\n");
	printf ("ABC, AB, 3: %d, %d\n",memcmp ("ABC", "AB", 3), ft_memcmp ("ABC", "AB", 3));
	printf ("ABC, AB, 2: %d, %d\n",memcmp ("ABC", "AB", 2), ft_memcmp ("ABC", "AB", 2));
	printf ("AB, ABC, 3: %d, %d\n",memcmp ("AB", "ABC", 3), ft_memcmp ("AB", "ABC", 3));
	printf ("AB, ABC, 2: %d, %d\n",memcmp ("AB", "ABC", 2), ft_memcmp ("AB", "ABC", 2));
	printf ("ABC, ABC, 3: %d, %d\n",memcmp ("ABC", "ABC", 3), ft_memcmp ("ABC", "ABC", 3));
	printf ("ABC, ABC, 0: %d, %d\n",memcmp ("ABC", "ABC", 0), ft_memcmp ("ABC", "ABC", 0));
	printf ("this!!: %d",ft_memcmp(s, s2, 4));
}

void test_ft_memchr()
{
	char str[] = "Hello World";
	int c;

	c = 0;
	printf("\n------------------ft_memchr--------------------\n");
	printf("c: result of memchr(Hello World, c, 12), result of ft_memchr(Hello World, c, 12)\n");

	while (c <= 127)
	{
		if (memchr (str, c, 12) == NULL && ft_memchr (str, c, 12) == NULL)
		{
			printf("%c: NULL, NULL\n", c);
		}
		else if (memchr (str, c, 12) != NULL && ft_memchr (str, c, 12) != NULL)
		{
			if (*((char *)memchr (str, c, 12)) == '\0' && *((char *)ft_memchr(str, c, 12)) == '\0')
			{
				printf("'0': '0', '0'\n");
			}
			else
			{
			printf("%c: %s, %s\n", c, (char *)memchr (str, c, 12), (char *)ft_memchr(str, c, 12));
			}
		}
		else
		{
			printf("does not match!!!!");
		}
	c++;
	}

}

void test_ft_strncmp()
{
	printf ("\n------------------ft_strncmp--------------------\n");
	printf ("params: strncmp, ft_strcmp\n");
	printf ("ABC, AB, 3: %d, %d\n",strncmp ("ABC", "AB", 3), ft_strncmp ("ABC", "AB", 3));
	printf ("ABC, AB, 2: %d, %d\n",strncmp ("ABC", "AB", 2), ft_strncmp ("ABC", "AB", 2));
	printf ("AB, ABC, 3: %d, %d\n",strncmp ("AB", "ABC", 3), ft_strncmp ("AB", "ABC", 3));
	printf ("AB, ABC, 2: %d, %d\n",strncmp ("AB", "ABC", 2), ft_strncmp ("AB", "ABC", 2));
	printf ("ABC, ABC, 3: %d, %d\n",strncmp ("ABC", "ABC", 3), ft_strncmp ("ABC", "ABC", 3));
}

void test_ft_strrchr()
{
	char str[] = "Hello World";
	int c;

	c = 0;
	printf("\n------------------ft_strrchr--------------------\n");
	printf("c: result of strrchr(Hello World, c), result of ft_strrchr(Hello World, c)\n");
	while (c <= 127)
	{
		if (strrchr (str, c) == NULL && ft_strrchr(str, c) == NULL)
		{
			printf("%c: NULL, NULL\n", c);
		}
		else if (strrchr (str, c) != NULL && ft_strrchr(str, c) != NULL)
		{
			if (*(strrchr (str, c)) == '\0' && *(ft_strrchr(str, c)) == '\0')
			{
				printf("'0': '0', '0'\n");
			}
			else
			{
			printf("%c: %s, %s\n", c, strrchr(str, c), ft_strrchr(str, c));
			}
		}
		else
		{
			printf("does not match!!!!");
		}
	c++;
	}
}


void test_ft_strchr()
{
	char str[] = "Hello World";
	char s[] = "tripouille";
	int c;

	c = 0;
	printf("\n------------------ft_strchr--------------------\n");
	printf("c: result of strchr(Hello World, c), result of ft_strchr(Hello World, c)\n");

	while (c <= 127)
	{
		if (strchr (str, c) == NULL && ft_strchr (str, c) == NULL)
		{
			printf("%c: NULL, NULL\n", c);
		}
		else if (strchr (str, c) != NULL && ft_strchr (str, c) != NULL)
		{
			if (*(strchr (str, c)) == '\0' && *(ft_strchr(str, c)) == '\0')
			{
				printf("'0': '0', '0'\n");
			}
			else
			{
			printf("%c: %s, %s\n", c, strchr (str, c), ft_strchr(str, c));
			}
		}
		else
		{
			printf("does not match!!!!");
		}
	c++;
	}
	printf("this!!!: %s, %s\n", strchr(s, 't' + 256), ft_strchr(s, 't' + 256));
}

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
	test_ft_strchr();
	test_ft_strrchr();
	test_ft_strncmp();
	test_ft_memchr();
	test_ft_memcmp();
	test_ft_strnstr();
	test_ft_atoi();
	test_ft_calloc();
	test_ft_strdup();
	return (0);
}


