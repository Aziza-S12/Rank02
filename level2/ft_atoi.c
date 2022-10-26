/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:16:41 by asadritd          #+#    #+#             */
/*   Updated: 2022/10/26 17:30:14 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*converts the string argument str to an integer (type int) and returns it
result * 10 to get to the next decimal place. str - '0' to transform char into int*/

int	ft_atoi(char *str)
{
	int result = 0;
	int sign = -1;

	while(*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (sign * result);
}