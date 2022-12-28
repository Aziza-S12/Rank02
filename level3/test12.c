#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base)
{
	int	i = 0;
	int	sign = 1;
	int	result = 0;

	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result = result + str[i] - '0';
		else if (str[i] >= 'a' && str[i] <= 'f')
			result = result + str[i] - 87;
		else if (str[i] >= 'A' && str[i] <= 'F')
			result = result + str[i] - 55;
		i++;
	}
	result = result * sign;
	return (result);
}

int main()
{
	const char *str = "0123abFc";
	int num = 0;
	int base = 9;

	num =ft_atoi_base(str, base);
	printf("num:%d\n", num);
	return (0);
}