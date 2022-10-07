/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_print.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:08:32 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/07 19:27:15 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*program that takes a string and displays the string in reverse, followed by a newline.
If number of parameters is not 1, the program displays a newline*/

int	main(int argc, char *argv[])
{
	int i = 0; 

	if (argc == 2)
	{
		while (argv[1][i])
			i += 1;
		while (i)
			write(1, &argv[1][--i], 1);
	}
	write (1, "\n", 1);
	return (0);
}