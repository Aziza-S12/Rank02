/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:11:19 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/02 18:15:47 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int 	i = 0;
	int 	length = 0;
	char	*strcpy;

	while(src[length])
		length++;
	strcpy = malloc(sizeof(*strcpy) * (length + 1));
	if (strcpy != NULL)
	{
		while (src[i])
		{
			strcpy[i] = src[i];
			i++;
		}
		strcpy[i] = '\0';
	}
	return(strcpy);
}