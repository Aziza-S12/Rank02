/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 17:44:15 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/02 17:47:54 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*func that takes a byte, and prints it in binary WITHOUT a newline at the end*/

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	bit;

	while (i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit, 1);
	}	
}
