/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:50:25 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/07 18:07:22 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
//func displays a string on the standard output. The pointer passed to the funct
//contains the &add of str's first char

void	ft_putstr(char *str)
{
	int	i = -1;
	
	while(str[i++])
		write(1, &str[i], 1);
}

int main()
{
	char *a = "Meteora";
	ft_putstr(a);
	
	return (0);
}
