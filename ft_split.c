/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/26 11:05:00 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/27 00:45:57 by vparlak          ###   ########.fr       */
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

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c)
		if (*str++ == '\0')
			return (NULL);
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**dst;
	size_t	count1;
	size_t	count2;
	int		len_s;

	count1 = 0;
	len_s = ft_strlen(s);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			count1++;
			while (*s && *s != c)
				s++;// strtim ile boşluklari sil stringi ilerlet ve yer ayırıp içine at
		}
	}
		dst = (char **)malloc((count1 + 1) * sizeof(char *));
	if (!dst)
		return (NULL);
	s = s - len_s;
	count2 = 0;
	while (len_s >= 0)
	{
		while (*s == c && *s)
			s++;
		if (*s != c && *s++)
		{
			count2++;
			if (*s && *s == c)
			{
				s -= count2;
				*dst = (char *)ft_substr(s, 0, count2);
				dst++;
				s += (count2 + 1);
				count2 = 0;
			}
			len_s--;
		}
	}
	dst[12] = '\0';
	return (dst - (count1 - 1));
}

int	main(void)
{
	char	**array;
	

  	array = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
	printf("%s\n", array[0]);
	printf("%s\n", array[1]);
	printf("%s\n", array[3]);
	printf("%s\n", array[4]);
	printf("%s\n", array[5]);
	printf("%s\n", array[6]);
	printf("%s\n", array[7]);
	printf("%s\n", array[8]);
	printf("%s\n", array[9]);
	printf("%s\n", array[10]);
	printf("%s\n", array[11]);

}
