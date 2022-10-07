/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:36:01 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/07 17:48:11 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//program that prints the numbers from 1 to 100, each separated by a newline.
//if the number is multiple of 3, it prints 'fizz' instead.
//if the num is mult-e of 5, it prints buzz instead. 
//if the num is both multiple of 3 and 5, it prints 'fizzbuzz' instead.

void	ft_write_numbers(int num)
{
	char	str[10] = "0123456789";

	if (num > 9)
		ft_write_numbers(num / 10);
	write (1, &str[num % 10], 1);
}

int	main()
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			ft_write_numbers(i);
		i++;
		write (1, "\n", 1);
	}
}