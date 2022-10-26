/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:38:32 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/26 16:52:16 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*program takes a string and displays it, replacing each of its letters by the letter 13 spaces ahead in alphabet-l order*/

int main(int argc, char **argv)
{
	int i = 0;

	if (argc > 1)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] -= 13;
			else if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] += 13;
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] -= 13;
			write(1, &argv[1][i], 1);
			i++; 
		}
	}
	write(1, "\n", 1);
}