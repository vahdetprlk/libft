/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vparlak <vparlak@student.42kocaeli.com.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 17:29:05 by vparlak           #+#    #+#             */
/*   Updated: 2022/12/12 16:35:44 by vparlak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char dst[] = "Ali";

	printf("%s\n", dst);
	printf("%s\n", ft_memmove(dst, "mehmet", 3));
}