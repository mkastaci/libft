/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:25:52 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 12:36:26 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str++ = '\0';
	}
}

/*
int main()
{
	char str[50] = "salut je mapelle mikail";
	printf("before : %s \n", str);
	ft_bzero(str, 4);
	printf("after : %s \n", str);
	return (0);

}*/
