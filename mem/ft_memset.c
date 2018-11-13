#include "libft.h"

void	*ft_memset(void *b, int c,	size_t len)
{
	unsigned char	*pb;

	pb = (unsigned char *)b;
	while (len--)
		*pb++ = (unsigned char)c;
	return (b);
}

/*
int main() 
{ 
	char str[50] = "mikail teste le code "; 
	printf("\nBefore memset(): %s\n", str); 

	// Fill 8 characters starting from str[13] with '.' 
	ft_memset(str, '&', 3*sizeof(char)); 

	printf("After memset():  %s", str);

	return 0; 
}*/ 
