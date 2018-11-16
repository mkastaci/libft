/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:41:04 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 12:43:33 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	char	*dstt;

	dstt = dst;
	while (*src)
		*dstt++ = *src++;
	*dstt = '\0';
	return (dst);
}
/*
int main()
{
	char lol[50] = "mikail";
	char loll[50] = "mikailee";
	printf("%s \n", ft_strcpy(loll, lol));
	printf("%s \n", loll);
	return (0);
}
*/
