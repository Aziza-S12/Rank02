/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ttrain.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 14:23:51 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/11 14:30:10 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	pputstr(char *str)
{
	int i = -1;

	while(str[i++])
		write(1, &str[i], 1);
}*/

char	*ft_sstrcpy(char *s1, char *s2)
{
	int i = 0;
	
	while (s2[i] != '\0')
		s1[i] = s2[i];
		i++;
	s1[i] = '\0';
	return(s1);
}