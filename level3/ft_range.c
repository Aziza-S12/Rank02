/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:49:11 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/21 20:28:51 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/*Write the following function:
int     *ft_range(int start, int end);
It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.
Examples:
- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.*/

int ft_abs(int nb)
{
	if (nb < 0)
		nb = - nb;
	return (nb);
}

int *ft_range(int start, int end)
{
    int size = ft_abs(end - start);
    int *res;
    int *pointer;

    if (size)
    {
        pointer = (int *)malloc(sizeof(int) * size);
        if (pointer)
        {
            res = pointer;
            while (start <= end)
            {
                *pointer = start;
                pointer++;
                start++;
            }
            while (start >= end)
            {
                *pointer = start;
                pointer++;
                start--;
            }
            return (res);
        }
    }
    return (NULL);
}

int	main(void)
{
	int	*array;
	int start = 0;
	int end = -5;
	int i;

	array = ft_range(start, end);
	i = 0;
    while (i <= (end * -1 - start))
	    printf("%d\n", array[i++]);
	return (0);
}