/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 12:40:59 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 12:44:42 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	unsigned int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

/*
int main()
{
	char lol[50] = "aaaaa";
	char loll[50]  = "aaaa";
	printf("le vrai : %d \n", strcmp(lol,loll));
	printf("le mien : %d \n", ft_strcmp(lol, loll));
	return (0);
}*/