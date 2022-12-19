/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:29:05 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/16 19:15:35 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "libft.h"
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(*s++)
		i++;
		return (i);

}
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1++ != *str2++)
			return (*str1 - *str2);
	}
	return (0);
}


int	check_white_space(char *s)
{
	while ()
	{
		/* code */
	}
	
}

int	ft_atoi(const char *str)
{	
	char	*s;
	int		res;

	res = 0;
	s = (char *)str;
	while (*s)
	{
		if (check_white_space);
		res *= 10;
		res += ((int)*s++ - '0');
	}	
	return (res);
}

int	main(void)
{
	char	s1[] = "  1234";

	printf("%d\n", atoi(s1));
	printf("%d\n", ft_atoi(s1));

}
