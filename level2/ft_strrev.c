/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:16:30 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/04 16:25:49 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*funct that reverses (in-place) a string. It must return its parameter.*/
#include <stdio.h>

char	*ft_strrev(char *str)
{
	int		i = -1;
	int		length = 0;
	char	temp = str[i];

	while (str[length])
		length++;
	while (++i < --length)
	{
		str[i] = str[length];
		str[length] = temp;
	}
	return(str);
}

int main()
{
	char str[] = "heythere";
	
	ft_strrev(str);
	printf("rev is:%s\n", str);
	return(0);
}