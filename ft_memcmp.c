/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 09:35:58 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/18 16:19:29 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = s1;
	str2 = s2;
	while (n--)
	{
		if (*(unsigned char *)s1++ != *(unsigned char *)s2++)
			return (*--str1 - *--str2);
	}
	return (0);
}
