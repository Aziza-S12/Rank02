/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:34:59 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 14:47:24 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*the first parameter is an array of int, the second is the number of elements in the array.
The func returns the largest number found in the array. If the array is empty, the func returns 0*/

#include <stdio.h>

int	max(int *tab, unsigned int len)
{
	int	i = 0;
	int	result;
	result = tab[i];

	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

int main()
{
	int array[] = {2, 5, 7, 12, 17, 20, 10};
	int size =  7;

	printf("%d\n", max(array, size));
}