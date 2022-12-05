/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:49:11 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 23:49:14 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int size = end - start;
    int *ret;
    int *pointer;

    if (size)
    {
        pointer = (int *)malloc(sizeof(int) * size);
        if (pointer)
        {
            ret = pointer;
            while (start <= end)
            {
                *pointer = start;
                pointer++;
                start++;
            }
            return (ret);
        }
    }
    return (NULL);
}

int	main(void)
{
	int	*array;
	int start = -1;
	int end = 4;
	int i;

	array = ft_range(start, end);
	i = 0;
	printf("%d\n", array[i]);
	return (0);
}