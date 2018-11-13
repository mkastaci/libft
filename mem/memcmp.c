#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char*p1;
	unsigned char*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	while (n--)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
	}
	return (0);
}
/*
int main()
{
	char lol[50] = "mikailmikail";
	char loll[50] = "mikailmikail";
	printf("le vrai : %d \n", memcmp(lol, loll, 0));
	printf("le mien : %d \n", ft_memcmp(lol, loll, 0));
	return (0);
}*/
