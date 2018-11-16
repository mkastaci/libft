/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:25:57 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 12:38:23 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned int		i;
	unsigned char		*dest;
	unsigned const char	*source;

	i = 0;
	dest = (unsigned char*)dst;
	source = (unsigned const char*)src;
	while (i < n)
	{
		if ((*dest++ = *source++) == (unsigned char)c)
			return (dest);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char source[50] = "mikail test le code";
	char dest[50] = "";

	printf("before source: %s \n", source);
	printf("before dest: %s \n", dest);
	ft_memccpy(dest, source, 'i', 9);
	printf("before source: %s \n", source);
	printf("before dest: %s \n", dest);
return (0);
}*/
