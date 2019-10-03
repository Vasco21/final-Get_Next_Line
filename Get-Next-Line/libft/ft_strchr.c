/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/26 12:03:02 by veti              #+#    #+#             */
/*   Updated: 2019/08/15 16:22:54 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strchr() function locates the first occurrence of c (converted to a char)
**in the string pointed to by s  The terminating null character is considered
**to be part of the string; therefore if c is `\0', the functions locate the
**terminating `\0'.
*/

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char*)s);
	}
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
