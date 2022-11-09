/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:00:44 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 17:17:40 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*program that takes three strings: 
-the 1st and the 3rd are representations of base-10 signed integers that fit in an int
-the 2nd is an arithmetic operator chosen from: + - * / %
The program must display the result of the requested arithmetic operation, fol-d by \n.
If number of param-s is not 3, the program just displays a newline

Can assume the string have no mistakes or extraneous chars. Negative numbers, in input or output, will have one and only one leading '-'.
The result of the operation fits in an int*/
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1]) + atoi(argv[3])));
		else if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1]) - atoi(argv[3])));
		else if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1]) * atoi(argv[3])));
		else if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1]) / atoi(argv[3])));
		else if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1]) % atoi(argv[3])));
	}
	printf("\n");
	return (0);
}
