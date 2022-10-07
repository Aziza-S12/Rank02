/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 17:55:29 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/05 17:49:02 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//swaps the contents of two integers the addresses of which passed as parameters

void	ft_swap(int *a, int *b)
{
	int keep;
	
	keep = *a;
	*a = *b;
	*b = keep; 
}

int main()
{
	int x;
	int y;
	
	printf("beforeswap:x = %d, y = %d\n", x, y);
	
	ft_swap(&x, &y);
	printf("afterswap: x = %d, y = %d", x, y);

	return(0);
	
}

