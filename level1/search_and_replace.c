/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:53:24 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/26 17:07:00 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*program that takes 3 arguments, the first arg is a string in which to replace a letter (2nd arg)
by another one (3rd arg). If the number of args is not 3, just display a newline
If 2nd arg is not contained in the first one (the string) then the program simply rewrites the string foll-d by "\n"*/

int main(int argc, char **argv)
{
	int i = 0; 

	if (argc == 4 && !argv[2][1] && !argv[3][1])
	{
		while (argv[1][i] != 0)
		{
			if (argv[1][i] == argv[2][0])
				argv[1][i] = argv[3][0];
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}