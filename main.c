/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:29:05 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/14 16:09:53 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

#include "libft.h"
 #include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*tmp;
	const char	*s;

	tmp = dst;
	s = src;
	while (n--)
		*tmp++ = *s++;
	return (dst);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	len;

	srcsize = strlen(src);
	if (dstsize)
	{
		if (srcsize >= dstsize)
			len = dstsize - 1;
		else
			len = srcsize;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (srcsize);
}


int	main(void)
{
	char src[] = "123456789";
	char dst[5];
	int a = strlcpy(dst,src,5);
	while(a--)
	//	printf("%c",*dst++);
}
