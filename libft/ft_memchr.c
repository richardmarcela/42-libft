/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marcela <marcela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 16:43:20 by marcela           #+#    #+#             */
/*   Updated: 2022/10/02 02:07:04 by marcela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned char	*s;
	unsigned char	chr;

	s = (unsigned char *)str;
	chr = (unsigned char)c;
	while (n--)
	{
		if (*s == chr)
			return (s);
		s++;
	}
	return (NULL);
}
/*
int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '/';
   char *ret;

   ret = ft_memchr(str, ch, 6);

   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}*/