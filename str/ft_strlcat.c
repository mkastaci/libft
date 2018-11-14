/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:41:20 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 14:10:18 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int		j;
	int		a;
	size_t	i;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
	{
		if (i == size)
			return (size + ft_strlen(src));
		i++;
	}
	a = i;
	while (src[j] != '\0' && i < (size - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	j = 0;
	while (src[j] != '\0')
		j++;
	dst[i] = '\0';
	return (a + j);
}
/*
int main()
{
	char lol[50] = "kastaci";
	char loll[50]  = "mikail";
	printf("NEW : %lu \n", ft_strlcat(loll, lol, 12));
	//printf("real : %lu \n", strlcat(loll, lol, 14));
	printf("real : %s \n", loll);
	return (0);
}*/
