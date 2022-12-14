/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 19:47:57 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/14 16:40:07 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	len;

	srcsize = ft_strlen(src);
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
