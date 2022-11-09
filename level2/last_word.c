/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:11:44 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 19:27:57 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*program that takes a string and displays its last word foll-d by a \n
A word is a section of string delimited by spaces/tabs or by the start/end if the string
If number of param-s isn't 1, or there are no words, display \n.*/
#include <unistd.h>

int main (int argc, char **argv)
{
	int		i = 0;
	char	*result;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] <= 32 && argv[1][i + 1] > 32)
				result = &argv[1][i + 1];
			if (result == 0)
				result = argv[1];
		i++;
		}
		i = 0;
		while (result && result[i] > 32)
		{
			write(1, &result[i], 1);
			i++;
		}
	}
	write(1, "\n",1);
}