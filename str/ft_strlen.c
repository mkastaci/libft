#include "libft.h"

size_t ft_strlen(const char *s)
{
	unsigned int i;

	i = 0;
	if (!s)
		return (0);
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int main(int argc, char **argv)
{
	if (argc)
	{
		printf("le vrai : %lu \n", strlen(argv[1]));
		printf("le mien : %lu \n", ft_strlen(argv[1]));
	}
	return (0);
}*/
