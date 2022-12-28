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
// 	int	size = ft_abs(end - start);
// 	int	*res;
// 	int	*pointer;

// 	if (size)
// 	{
// 		pointer = (int *)malloc(sizeof(int) * size);
// 		if (pointer)
// 		{
// 			res = pointer;
// 			while (start <= end)
// 			{
// 				*pointer = start;
// 				pointer++;
// 				start++;
// 			}
// 			while (start >= end)
// 			{
// 				*pointer = start;
// 				pointer++;
// 				start--;
// 			}
// 			return (res);
// 		}
// 	}
// 	return (NULL);
// }

int	*ft_rrange(int start, int end)
{
	int	size = ft_abs(end - start + 1);
	int	*pointer;
	int	*res;

	if (size)
	{
		pointer = (int *)malloc(sizeof(int) * size);
		if (pointer)
		{
			res = pointer;
			while (end > start)
			{
				*pointer = end;
				pointer++;
				end--;
			}
			while (end < start)
			{
				*pointer = end;
				pointer++;
				end++;
			}
			return (res);
		}
	}
}

int main ()
{
	int start = -1;
	int end = 2;
	int *arr;
	int i;

	arr = ft_rrange(start, end);
	i = 0;

	while (i <= (end - start) + 1)
	{
		printf ("%d\n", arr[i]);
		i++;
	}
}