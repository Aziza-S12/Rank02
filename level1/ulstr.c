/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:18:42 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/26 16:34:49 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*program that takes a string and reverses the case of all its letters
Other chars remain unchanged. result followed by new line and new line if number of args is not 1*/

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				argv[1][i] -= 32;
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				argv[1][i] += 32;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

// int main(int argc, char **argv)
// {
// 	int i = 0;

// 	if (argc == 2)
// 	{
// 		while (argv[1][i] != '\0')
// 		{
// 			if (argv[1][i] >= 65 && argv[1][i] <= 90)
// 			{
// 				argv[1][i] = argv[1][i] + 32;
// 				write(1, &argv[1][i], 1);
// 			}
// 			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
// 			{
// 				argv[1][i] = argv[1][i] - 32;
// 				write(1, &argv[1][i], 1);
// 			}
// 			i++;
// 		}
// 	}
// 	write(1, "\n", 1);
// }