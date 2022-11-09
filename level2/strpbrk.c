/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strpbrk.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:44:58 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 17:52:51 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*reproduce behavior of strpbrk func - locate multiple chars in str*/

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	if (!s1 || !s2)
		return (0);
	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return (char *) s1;
			i++;
		}
		s1++;
	}
	return (0);
}