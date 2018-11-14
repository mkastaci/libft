/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:41:28 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 14:09:59 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlen(const char *s)
{
	unsigned int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int main(int argc, char **argv)
{
	if (argc)
	{
		printf("le vrai : %lu \n", strlen(argv[1]));
		printf("le mien : %lu \n", ft_strlen(argv[1]));
	}
	return (0);
}*/
