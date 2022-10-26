/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:29:42 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/11 14:32:24 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h> 
//function returns lenght of a string

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return(i);
}

int main()
{
	char a[12] = "The motion";

	printf("Length of a = %d\n", ft_strlen(a));
	
	return (0);
}