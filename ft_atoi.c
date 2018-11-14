#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	int neg;
	int res;

	i = 0;
	neg = 0;
	res = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == ' ' || str[i] == '\r'
			|| str[i] == '\f' || str[i] == '\v')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		neg = 1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	if (neg == 1)
		return (res *= -1);
	return (res);
}

/*
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("le vrai : %d   \n", atoi(argv[1]));
		printf("le mien %d  \n", ft_atoi(argv[1]));
	}
	return (0);
}
*/
