#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char *ptr;

	ptr = (char*)s;
	while (*ptr && *ptr != c)
		ptr++;
	if (*ptr == c)
		return (ptr);
	else
		return (NULL);
}

/*
int main()
{
	char lol[50] = "mikail";
	printf("le vrai : %s \n", strchr(lol, 'l'));
	printf("le mien : %s \n", ft_strchr(lol, 'l'));
	return (0);
}*/
