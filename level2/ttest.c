#include <stdio.h>

int	ft_atoi(char *str)
{
	int result;
	int sign = 1;

	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (ft_atoi(argv[1]) + ft_atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (ft_atoi(argv[1]) + ft_atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", (ft_atoi(argv[1]) * ft_atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", (ft_atoi(argv[1]) / ft_atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", (ft_atoi(argv[1]) % ft_atoi(argv[3])));
	}
	printf("\n");
	return (0);
}

// int main()
// {
// 	char st[] = "156";
// 	printf("%d\n", ft_atoi(st));
// }