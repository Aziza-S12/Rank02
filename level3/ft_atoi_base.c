/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 23:49:22 by asadritd          #+#    #+#             */
/*   Updated: 2022/12/28 17:33:46 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that converts the string argument str (base N <= 16)
to an integer (base 10) and returns it.
The characters recognized in the input are: 0123456789abcdef
Those are, of course, to be trimmed according to the requested base. For
example, base 4 recognizes "0123" and base 16 recognizes "0123456789abcdef".
Uppercase letters must also be recognized: "12fdb3" is the same as "12FDB3".
Minus signs ('-') are interpreted only if they are the first character of the
string.*/
char    to_lower(char c)
{
    if (c >= 'A' && c <= 'Z')
        return (c + ('a' - 'A'));
    return (c);
}

int get_digit(char c, int digits_in_base)
{
    int max_digit;
    if (digits_in_base <= 10)
        max_digit = digits_in_base + '0';
    else
        max_digit = digits_in_base - 10 + 'a';
    if (c >= '0' && c <= '9' && c <= max_digit)
        return (c - '0');
    else if (c >= 'a' && c <= 'f' && c <= max_digit)
        return (10 + c - 'a');
    else
        return (-1);
}

int ft_atoi_base(const char *str, int str_base)
{
    int result = 0;
    int sign = 1;
    int digit;

    if (*str == '-')
    {
        sign = -1;
        ++str;
    }

    while ((digit = get_digit(to_lower(str), str_base)) >= 0)
    {
        result = result * str_base;
        result = result + (digit * sign);
        ++str;
    }
    return(result);
}

int	ft_atoi_base(const char *str, int str_base)
{
	int i;
	int result;
	int sign;

	i = 0;
	result = 0;
	sign = 1;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result = result * str_base;
		if (str[i] >= '0' && str[i] <= '9')
		{
			result = result + str[i] - '0';
		}
		else if (str[i] >= 'a' && str[i] <= 'f')
		{
			result = result + str[i] - 87;
		}
		else if (str[i] >= 'A' && str[i] <= 'F')
		{
			result = result + str[i] - 55;
		}
		i++;
	}
	result = result * sign;
	return (result);
}

int main()
{
	const char *str = "0123abFc";
	int num = 0;
	int base = 9;

	num =ft_atoi_base(str, base);
	printf("num:%d\n", num);
	return (0);
}