/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:11:09 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/21 20:34:36 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int ft_abs (int nb)
{
	if (nb < 0)
	{
		nb = -nb;
	}
	return nb;
}

int     *ft_rrange(int start, int end)
{
	int *array;
	int i = 0;
	int n = end - start + 1;

	array = (int *)malloc(sizeof(int) * n);
	
	while (end > start)
	{
		array[i] = end;
		i++;
		end--;
	}
	array[i] = start;
	while (end < start)
	{
		array[i] = end;
		i++;
		end++;
	}
	array[i] = start;
	return (array);
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