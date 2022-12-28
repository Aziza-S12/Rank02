#include <stdlib.h>
#include <stdio.h>

int	ft_abs(int nb)
{
	if (nb < 0)
		nb = - nb;
	return (nb);
}

// int	*ft_range(int start, int end)
// {
// 	int size = ft_abs(end - start);
// 	int *res;
// 	int *pointer;

// 	if (size)
// 	{
// 		pointer = (int *)malloc(sizeof(int) * size);
// 		{
// 			if (pointer)
// 			{
// 				res = pointer;
// 				while (start <= end)
// 				{
// 					*pointer = start;
// 					pointer++;
// 					start++;
// 				}
// 				while (start >= end)
// 				{
// 					*pointer = start;
// 					pointer++;
// 					start--;
// 				}
// 				return (res);
// 			}
// 		}
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	int	*array;
// 	int start = -1;
// 	int end = 3;
// 	int i;

// 	array = ft_range(start, end);
// 	i = 0;
//     while (i <= (end - start))
// 	    printf("%d\n", array[i++]);
// 	return (0);
// }

int *ft_rrange(int start, int end)
{
	int	size = ft_abs(end - start + 1);
	int *array;
	int i = 0;

	if (size)
	{
		array = (int *)malloc(sizeof(int) * size);
		while (end > start)
		{
			array[i] = end;
			i++;
			end--;
		}
		while (end < start)
		{
			array[i] = end;
			i++;
			end++;
		}
		array[i] = start;
		return (array);
	}
	return (0);
}

int main ()
{
	int start = -1;
	int end = 2;
	int *arr;
	int i;

	arr = ft_rrange(start, end);
	i = 0;

	while (i < (end - start) + 1)
	{
		printf ("%d\n", arr[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;

	if (argc == 3)
	{
		while (argv[2][j] && argv[1][i])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;

		}
		if (argv[1][i] == '\0')
			write(1, "1", 1);
		else
			write(1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}