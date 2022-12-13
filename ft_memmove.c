/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 18:06:39 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/13 19:06:50 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp;
	const char	*s;

	tmp = dst;
	s = src;
	if (src >= dst)
	{
		while (len--)
			*tmp++ = *s++;
	}
	else
	{
		tmp += len;
		s += len;
		while (len--)
			*--tmp = *--s;
	}
	return (dst);
}
