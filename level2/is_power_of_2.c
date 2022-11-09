/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:02:04 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 19:10:11 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*func that determines if a given number is a power of 2.
It returns 1 if the given number is a power of 2, otherwise it returns 0*/
#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	int number = 1;

	while (number <= n)
	{
		if (number == n)
			return (1);
		number = number * 2;
	}
	return (0);
}

int main()
{
	printf("%d\n", is_power_of_2(16));
}