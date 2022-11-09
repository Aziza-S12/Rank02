/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wdmatch.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 14:20:48 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 14:32:09 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Program that takes two strings anf checks whether it's possible to write the first str
with chars from the second str, while respecting the order in which these chars appear in the second string.
If possible, displays the string foll-d by \n, otherwise it simply displays a \n*/
#include <unistd.h>

void	ft_putstr(char const *str)
{
	int i = 0;
	
	while (str[i])
		write(1, &str[i++], 1);
}

int main(int argc, char const *argv[])
{
	int	i = 0;
	int	j = 0;

	if (argc == 3)
	{
		while (argv[2][j])
			if (argv[2][j++] == argv[1][i])
				i += 1;
		if (!argv[1][i])
			ft_putstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}