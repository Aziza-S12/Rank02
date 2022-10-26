/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:33:39 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/26 16:37:34 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*program that takes a string and dispays it repeating each alphabetical
char as many times as its alphabetical index, foll-d by a newline*/

int main(int argc, char **argv)
{
	int i = 0; 

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				for (int k = 0; k < argv[1][i] - 96; k++)
					write (1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				for (int a = 0; a < argv[1][i] - 64; a++)
					write (1, &argv[1][i], 1);
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}