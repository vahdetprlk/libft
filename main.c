/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:29:05 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/15 17:35:06 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"
size_t ft_strlen(const char *s)
{
	size_t i;

	i = 0;
	while(*s++)
		i++;
		return (i);

}
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	while (n--)
	{
		str1 = *s1++;
		str2 = *s2++;
		if (str1 != str2)
			return (str1 - str2);
	}
	return (0);
}

int main()
{
	char s1[] = "AAC";
	char s2[] = "AAC";
	printf("%d",ft_strncmp(s1,s2,3) );
}