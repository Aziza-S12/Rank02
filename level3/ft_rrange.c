/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 00:11:09 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/06 00:18:14 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_rrange(int start, int end)
{
    int *range;
    int i = 0;
    int n = end - start + 1;

    if (start > end)
        return (ft_rrange(end, start));
    range = (int *)malloc(sizeof(int) * n);
    if (range)
    {
        while (i < n)
        {
            range[i] = start;
            start++;
            i++;
        }
    }
    return (range);
}

int main ()
{
	int start = -4;
	int end = 1;
	int *arr;
	int i;

	arr = ft_rrange (start, end);
	i = 0;

	while (i < (end - start) + 1)
	{
		printf ("%d\n", arr[i]);
		i++;
	}
}