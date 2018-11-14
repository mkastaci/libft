#include "libft.h"

char *ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int j;
	char *pt;

	i = 0;
	pt = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[0])
		{
			pt = (char *)haystack + i;
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
					return (pt);
				j++;
			}
			pt = 0;
		}
		i++;
	}
	return (NULL);
}

/*
int main()
{
	char lol[50] = "mikailtestlecode";
	char loll[50] = "ail";

	printf("le vrai : %s", strstr(lol, loll));
	printf("le mien : %s", ft_strstr(lol, loll));
	return (0);
}*/
