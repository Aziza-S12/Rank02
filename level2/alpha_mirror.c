/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:06:37 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/04 16:13:56 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*program takes a string and displays this string after replacing each alphab-l char
by the opposite alphab-l char, foll-d by a newline. 'a' becomes 'z'; 'M' becomes 'N'*/
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
				argv[1][i] = 90 - argv[1][i] + 65;
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
				argv[1][i] = 122 - argv[1][i] + 97;
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}
