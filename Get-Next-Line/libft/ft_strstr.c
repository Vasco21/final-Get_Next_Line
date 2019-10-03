/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/06 11:30:54 by veti              #+#    #+#             */
/*   Updated: 2019/08/19 02:19:12 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*l;
	const char	*p;

	l = needle;
	p = NULL;
	if (*l == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		if (p != NULL && *haystack == *l)
			l++;
		else
		{
			if (p != NULL)
				haystack = p + 1;
			p = NULL;
			l = needle;
		}
		if (p == NULL && *haystack == *l && (*(p = haystack) || 1))
			l++;
		if (p != NULL && *l == '\0')
			return ((char*)p);
		haystack++;
	}
	return (*haystack == *l ? (char*)haystack : NULL);
}
