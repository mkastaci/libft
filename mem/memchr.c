#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t i;
	unsigned char*str;

	i = 0;
	str = (unsigned char*)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/*
int main()
{
	char lol[50] = "mikail test le code";
	printf("%s \n", lol);
	printf("on a trouver : %s \n", ft_memchr(lol, 'e', 9));
	printf("%s \n", memchr(lol, 'e', 9));
	return (0);
}*/
