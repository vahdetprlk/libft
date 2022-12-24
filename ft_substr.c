/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 05:56:11 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/24 06:41:08 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++ != '\0')
		i++;
	return (i);
}
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	d = dst;
	s = src;
	if (!d && !s)
		return (NULL);
	while (n--)
		*d++ = *s++;
	return (dst);
}


size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	len_src;
	size_t	len;

	len_src = ft_strlen(src);
	if (dstsize)
	{
		if (len_src >= dstsize)
			len = dstsize - 1;
		else
			len = len_src;
		ft_memcpy(dst, src, len);
		dst[len] = '\0';
	}
	return (len_src);
}


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	dst = malloc(len + 1);
	if (dst == NULL)
		return (NULL);
	ft_strlcpy(dst, s + start, len + 1);
	return (dst);
}
	int main(void)
	{
		  char *s = "all of this !";
        size_t size = ft_strlen(s);
        char *ret = ft_substr(s, 18, 20);
		printf("%s", ret);
	}