/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:35:15 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/02 17:43:24 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*funct that  takes a byte, swaps its halves and returns the result*/

unsigned char	swap_bits(unsigned char octet)
{
	return((octet >> 4 || octet << 4));
}
