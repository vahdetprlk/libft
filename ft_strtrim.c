/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:17:05 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/25 22:18:05 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (*s++ != '\0')
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
			return (*--str1 - *--str2);
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	if (!len_needle)
		return ((char *)haystack);
	while (*haystack != '\0' && len-- >= len_needle)
	{		
		if (!ft_memcmp(haystack++, needle, len_needle))
			return ((char *)--haystack);
	}
	return (NULL);
}
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	len_str;

	len_str = ft_strlen(s);
	if (start >= len_str)
	{
		dst = (char *)malloc(sizeof(char));
		if (!dst)
			return (NULL);
		*dst = '\0';
	}
	else
	{	
		if (len_str >= len)
			dst = (char *)malloc(len + 1);
		else
			dst = (char *)malloc(len_str + 1);
		if (dst == NULL)
			return (NULL);
		ft_strlcpy(dst, s + start, len + 1);
	}
	return (dst);
}
void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	const char	*s;
	char		*d;

	d = (char *)dst;
	s = (const char *)src;
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
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	str1;
	unsigned char	str2;

	while (n-- && (*s1 || *s2))
	{
		str1 = (unsigned char)*s1++;
		str2 = (unsigned char)*s2++;
		if (str1 != str2)
			return (str1 - str2);
	}
	return (0);
}
char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
		if (*str++ == '\0')
			return (NULL);
	return (str);
}
char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len_str;

	str = (char *)s;
	len_str = ft_strlen(str);
	while (len_str >= 0)
	{
		if (str[len_str] == (char)c)
			return (str + len_str);
		else if (len_str == 0)
			return (NULL);
		if (len_str > 0)
			len_str--;
	}
	return (NULL);
} */

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	end;
	size_t	lset;
	char	*str;
	char	*dst;

	str = (char *)s1 + ft_strlen(s1);
	end = ft_strlen(s1);
	lset = ft_strlen(set);
	if (!s1 || !set)
		return (NULL);
	while (lset--)
		if (ft_strchr(set, *s1))
			s1++;
	lset = ft_strlen(set);
	while (lset--)
		if (ft_strchr(set, *str--))
			end--;
		dst = ft_substr(s1, 0, end + 1);
	return (dst);
}

/* int main(void)
{
	printf("%s", ft_strtrim("afbababaadbababad", "ad"));
}
 */