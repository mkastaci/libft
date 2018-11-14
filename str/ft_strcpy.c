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
