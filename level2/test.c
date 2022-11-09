#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i])
		i++;
	return (i);
}

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int result;
	result = tab[i];

	while (i < len)
		if (result < tab[i])
			result = tab[i];
		i++;
	return (result);
}