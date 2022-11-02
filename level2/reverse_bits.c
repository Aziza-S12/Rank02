/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 18:02:58 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/02 18:06:39 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*funct that takes a byte, reverses it, bit by bit and returns result*/

unsigned char	reverse_bits(unsigned char octet)
{
	int 			i = 8;
	unsigned char	res= 0;
	
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return(res);
}