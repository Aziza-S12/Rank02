/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:07:56 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/07 18:23:35 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
//reproduce the behavior of the func strcpy
//s1 = dest, s2 = src. Func copies the string src to dst (including '\0' char)

char	*ft_strcpy(char *s1, char *s2)
{
	int i = 0; 

	while (s2[i] != '\0')
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return(s2);
}

int main()
{
	char str1[20] = "Hey there";
	char str2[20] = "move it";
	
	ft_strcpy(str1, str2);
	printf("after strcpy: %s\n", str1);

	return 0;
}