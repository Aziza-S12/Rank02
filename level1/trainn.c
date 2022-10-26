/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   trainn.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 13:59:57 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/11 14:22:49 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_num(int num)
{
	char str[10] = "0123456789";
	
	if (num > 9)
		write_num(num / 10);
	write (1, &str[num % 10], 1);
}

int main()
{
	int i = 1;
	
	while(i <= 100)

	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else
			write_num(i);
		i++;
		write (1, "\n", 1);
	}
}