/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 18:17:17 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 18:58:54 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*program that takes two strings and displays, without doubles, the chars that appear
in both strings, in the order they appear in the first one.
The display foll-d by a \n. If args != 2, displays \n*/
#include <unistd.h>

int	check_doubles(char *str, char c, int len)
{
	int i = 0;

	while (str[i] && (i < len || len == -1))
	{
		if (str[i] == c)
			return (1);
	i++;
	}
	return (0);
}

int main (int argc, char *argv[])
{
	int	i;
	
	if (argc == 3)
	{
		i = 0;
		while (argv[1][i])
		{
			if (!check_doubles(argv[1], argv[1][i], i) && check_doubles(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i += 1;
		}
	}
	write(1, "\n", 1);
	return (0);
}
