/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reptrain.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:33:26 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/11 14:39:44 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0; 

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				for (int a = 0; a < argv[1][i] - 96, a++)
					write(1, &argv[1][i], 1);
			}
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				for (int k = 0, k < argv[1][i] - 64, k++)
					write(1, &argv[1][i], 1);
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}