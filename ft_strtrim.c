/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 17:34:50 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/15 14:01:18 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	j--;
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	while (j > 0 && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
		j--;
	if (j <= 0)
	{
		ptr = (char*)malloc(sizeof(char) * 1);
		ptr[0] = '\0';
		return (ptr);
	}
	else
		return (ptr = ft_strsub(s, i, j - i + 1));
}

/*
int main()
{
	char *lol = "   mikail\t\t\t\t\t";
	printf("avant : %s\n", lol);
	lol = ft_strtrim(lol);
	printf("apres : %s\n", lol);
	return (0);
}*/
