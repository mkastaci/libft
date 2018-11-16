/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:26:02 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 12:37:45 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	pdst = dst;
	psrc = src;
	while (n--)
		*pdst++ = *psrc++;
	return (dst);
}

/*
int main()
{
	char source[50] = "salut je mapelle mikail";
	char destination[50] = "mikail128765432367";

	printf("before source : %s \n", source);
	printf("before destination : %s \n", destination);
	printf("testttt : %s \n", ft_memcpy(destination, source, 8));
	printf("after source : %s \n", source);
	printf("after destination : %s \n", destination);
	return (0);
	}*/
