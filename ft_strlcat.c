/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 16:41:30 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/15 16:07:09 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	if (dsize >= dstsize)
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
