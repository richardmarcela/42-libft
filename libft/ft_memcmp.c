/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:02:07 by marcela           #+#    #+#             */
/*   Updated: 2022/09/25 00:04:36 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	unsigned char	*conv_s1;
	unsigned char	*conv_s2;

	conv_s1 = (unsigned char *)str1;
	conv_s2 = (unsigned char *)str2;
	while (n--)
	{
		if (*conv_s1 != *conv_s2)
			return (*conv_s1 - *conv_s2);
		conv_s1++;
		conv_s2++;
	}
	return (0);
}
/*
int		main()
{
   char str1[] = "aaa";
   char str2[] = "AAA";

   printf("%d \n", memcmp(str1, str2, 3));
   printf("%d \n", ft_memcmp(str1, str2, 3));

   return (0);
}*/