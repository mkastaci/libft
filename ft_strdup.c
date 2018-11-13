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


int main()
{
	char lol[50] = "mikail";
	printf("%s \n", ft_strdup(lol));
	return (0);
}
