/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:24:17 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/21 02:21:55 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	char	*last;

	str = (char *)s;
	last = NULL;
	if (!c)
		return (0);
	while (*str)
	{
		if (*str == (char)c)
			last = str;
			str++;
	}
	return (last);
}

/* int main()
{
	ft_strrchr("ali", '\0');
} */
