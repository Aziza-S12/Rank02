/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:49:46 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/02 18:00:05 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*program that takes two strings and displays, without doubles, the chars that appear
in either one of the strings. The display will be in the order chars appear in the command line and foll-d by \n
if number or args is not 2, the program displays \n*/
#include <unistd.h>

int	check(int c, char *str, int index)
{
	int i = 0;

	while(i < index)
	{
		if (str[i] == c)
			return 0;
		i++;
	}
	return 1;
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while(argv[1][i] != '\0')
			i++;
		while(argv[2][j] != '\0')
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		i--;
		while(k <= i)
		{
			if(check(argv[1][k], argv[1], k) == 1)
				write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
}