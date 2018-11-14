#include "libft.h"

char*ft_strrchr(const char *s, int c)
{
	char *cc;

	cc = NULL;
	while (*s != '\0')
	{
		if (*s == (char)c)
			cc = (char*)s;
		s++;
	}
	if (*s == (char)c)
		return ((char*)s);
	else
		return (cc);
}

/*
int main()
{
	char lol[50] = "mikail";
	printf("le vrai : %s \n", strrchr(lol, '\0'));
	printf("le mien : %s \n", ft_strrchr(lol, '\0'));
	return (0);
}*/
