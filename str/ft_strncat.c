#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	unsigned int i;
	unsigned int ii;

	i = 0;
	ii = 0;
	while (s1[i])
		i++;
	while (n--)
	{
		s1[i] = s2[ii];
		i++;
		ii++;
	}
	s1[i] = '\0';
	return (s1);
}


/*
int main() 
{
	char lol[50] = "kastaci";
	char loll[50]  = "mikail";
	printf("le vrai : %s \n", strncat(loll, lol, 3));
	printf("le mien : %s \n", ft_strncat(loll, lol, 3));
	return (0);
}*/
