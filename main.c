/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsenzaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:30:32 by hsenzaki          #+#    #+#             */
/*   Updated: 2023/11/05 21:02:16 by hsenzaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
size_t strlen(const char *s);

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
	const char *c;
	*c = 'h';
	*(c+1) = 'e';
	*(c+2) = 'l';
	*(c+3) = 'l';
	*(c+4) = 'o';
	*(c+5) = '\0';

	printf("------------------ft_strlen--------------------\n");
	printf("input: strlen, ft_strlen\n");
	printf("hello: %zu, %zu", strlen(c), ft_strlen(c));
}

int	main(void)
{
	test_ft_isalpha();
	test_ft_isdigit();
	test_ft_isalnum();
	test_ft_isascii();
	test_ft_isprint();
	test_ft_strlen();
	return (0);
}


