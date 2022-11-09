/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asadritd <asadritd@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:58:50 by asadritd          #+#    #+#             */
/*   Updated: 2022/11/09 18:08:17 by asadritd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*reproduce behavior of strspn func*/
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return ((char *)s);
		++s;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *charset)
{
	size_t i = 0;

	while (s[i] != '\0')
	{
		if (ft_strchr(charset, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}