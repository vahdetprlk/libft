/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 16:24:17 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/21 17:07:53 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char	*str;
	size_t	len_str;

	str = (char *)s;
	len_str = strlen(str) + 1;
	while (--len_str >= 0)
	{
		if (str[len_str] == (char)c)
			return (str + len_str);
	}
	return (NULL);
}
/* int main()

{
	printf("%s", ft_strrchr("bonjour", '\0'));
} */
