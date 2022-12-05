/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:49:40 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/05 23:49:42 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n = n * -1;
	}
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
	}
	if (n >= 10)
	{
		ft_putnbr (n / 10, fd);
		ft_putnbr (n % 10, fd);
	}
}

int is_prime(int num)
{
    int i = 3;

    if (num <= 1)
        return (0);
    if (num % 2 == 0 && num > 2)
        return (0);
    while (i < (num / 2))
    {
        if (num % i == 0)
            return 0;
        i += 2;
    }
    return 1;
}

int main(int argc, char *argv[])
{
    int sum = 0;
    int nb = atoi(argv[1]);

    if (argc == 2)
    {
        while (nb > 0)
            if (is_prime(nb--))
                sum += (nb + 1);
        ft_putnbr(sum);
    }
    if (argc != 2)
        ft_putnbr(0);
    write(1, "\n", 1);
    return (0);
}