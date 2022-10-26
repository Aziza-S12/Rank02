/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   train.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:24:32 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/07 18:27:57 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*f_strcpy(char *str1, char *str2)
{
	int i = 0;

	while (str2[i] != '\0')
	{
		str1[i] = str2[i];
		i++; 
	}
	str1[i] = '\0';
	return (str1);
}

int main()
{
	char str1[20] = "Hey there";
	char str2[20] = "move it";
	
	f_strcpy(str1, str2);
	printf("after strcpy: %s\n", str1);

	return 0;
}