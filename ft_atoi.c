/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 16:59:06 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/17 23:55:42 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* int	ft_atoi(const char *str)
{	
	char	*s;
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	s = (char *)str;
	while ((*s >= 9 && *s <= 13) || *s == 32)
		s++;
	if (*s == '-')
		sign *= -1;
	if ((*s == '+' || *s == '-') && (!ft_isdigit(*++s)))
		return (0);
	while (ft_isdigit(*s))
		res = (res * 10) + ((int)*s++ - '0');
	return (sign * res);
} */

int	ft_atoi(const char *str)
{	
	int		res;
	int		sign;

	res = 0;
	sign = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '-')
		sign *= -1;
	if ((*str == '+' || *str == '-') && (!ft_isdigit(*++str)))
		return (0);
	while (ft_isdigit(*str))
		res = (res * 10) + (*str++ - '0');
	return (sign * res);
}


int	main(void)
{
	char	s1[44] =  "a12861678";
	printf("%d\n", ft_atoi(s1));
	printf("%d", atoi(s1));
}
