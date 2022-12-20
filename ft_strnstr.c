/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 09:54:08 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/21 01:45:02 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	len_needle = ft_strlen(needle);
	if (!len_needle)
		return (h);
	while (len--)
		if (!ft_memcmp(h++, n, len_needle))
			return (--h);
	return (NULL);
}
