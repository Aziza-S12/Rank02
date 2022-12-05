/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 00:31:49 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/24 00:43:02 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_atoi(char *str)
{
    int n = 0;

    while (*str != '\0')
    {
        n = n * 10;
        n = n + *str - '0';
        ++str;
    }
    return (n);
}

void    print_hex(int n)
{
    char    hex_digits[] = "0123456789abcdef";

    if (n >= 16)
        print_hex(n / 16);
    write (1, &hex_digits[n % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        print_hex(ft_atoi(argv[1]));
    write(1, "\n", 1);
}