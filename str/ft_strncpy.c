/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:41:49 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 12:41:50 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	unsigned int i;

	i = 0;
	while (src[i] != '\0' && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
		dst[i++] = '\0';
	return (dst);
}

/*
int main()
{
	char lol[50] = "mikailljdjil";
	char loll[50] = "";

	printf("le vrai : %s \n", strncpy(loll, lol, 50));
	printf("le mien : %s \n", ft_strncpy(loll, lol, 50));
	return (0);

}*/