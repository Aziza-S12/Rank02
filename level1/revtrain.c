/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revtrain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:41:40 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/26 16:17:27 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//program that takes a string and displays the string in reverse foll-w by \n

int main(int argc, char *argv[])
{
	int i = 0; 

	if (argc == 2)
	{
		while(argv[1][i])
			i += 1;
		while (i)
			write(1, &argv[1][--i], 1);
	}
	write (1, "\n", 1);
	return (0);
}