/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 13:00:58 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 13:25:56 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
/*reproduce behavior of the strspn (span a string) func. Should use %zu to print variables of size_t length, %d also ok. %lu for unsigned int & unsigned long*/

size_t	ft_strcspn(const char *s, const char *reject)
{
	int	i = 0;
	int	j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return(i);
			j++;
		}
		i++;
	}
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

int main()
{
	char	str[] = "Heeelllooos";
	char	str2[] = "lo";

	printf("%zu\n", ft_strcspn(str, str2));
	printf("%lu\n", strcspn(str, str2));
	return (0);	
}