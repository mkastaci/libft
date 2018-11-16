/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memmove.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkastaci <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/14 13:47:12 by mkastaci          #+#    #+#             */
/*   Updated: 2018/11/14 14:08:49 by mkastaci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*tmp_dst;
	const char	*tmp2_src;

	tmp_dst = dst;
	tmp2_src = src;
	if (len <= 0)
		return (dst);
	if (tmp_dst < tmp2_src)
	{
		while (len-- > 0)
			*tmp_dst++ = *tmp2_src++;
	}
	else
	{
		tmp_dst += len;
		tmp2_src += len;
		while (len-- > 0)
			*--tmp_dst = *--tmp2_src;
	}
	return (dst);
}

/*
int main()
{
	char lol[50] = "kastaci";
	char loll[50] = "mikail";

	void *s1 = lol;
	void *s2 = loll;
	printf("%s\n", (char*)ft_memmove(s1, s2, 4));
}
*/
