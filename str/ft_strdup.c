#include "libft.h"

char	*ft_strdup(const char *s1)
{	
	char	*cp;

	cp = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (cp == NULL)
		return (NULL);
	else
		cp = ft_strcpy(cp, s1);
	return (cp);
}

/*
int main()
{
	char lol[50] = "mikail";
	char *loll;
	loll = ft_strdup(lol);
	printf("%s \n", loll);
	return (0);
}*/
