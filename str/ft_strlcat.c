#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	int j;
	int a;
	size_t i;

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


size_t		ftt_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t t1;
	size_t t2;

	i = 0;
	t1 = ft_strlen(dst);
	t2 = ft_strlen(src);
	if (size - 1 <= t1)
		return (t2 + size);
	while (t1 + i < size - 1)
	{
		dst[t1 + i] = src[i];
		i++;
	}
	dst[t1 + i] = '\0';
	return (t1 + t2);
}


int main()
{
	char lol[50] = "kastaci";
	char loll[50]  = "mikail";
	printf("le vrai : %lu \n", ftt_strlcat(loll, lol, 0));
	//printf("le mien : %lu \n", ft_strlcat(loll, lol, 0));
	return (0);
}
