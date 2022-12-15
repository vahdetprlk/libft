/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:29:05 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/15 14:47:30 by vparlak          ###   ########.fr       */
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
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	len;
	size_t	dsize;
	size_t	res;

	srcsize = ft_strlen(src);
	dsize = ft_strlen(dst);
	res = srcsize + dsize;
	dst += dsize;
	if(dsize >= dstsize)
	return (srcsize + dstsize);
	if (dstsize)
	{
		if (srcsize < dstsize)
			len = (dstsize - dsize);
		else
			len = 0;
		ft_strlcpy(dst, src, len);
	}
	return (res);
}

int main()
{
	char src[100] = "Ali";
	char dst[100] = "Bayt";

	printf("%zu", strlcat(dst,src,29));
	char srct[] = "Ali";
	char dstt[] = "Bayt";
	printf("%zu", ft_strlcat(dstt,srct,29));
}

