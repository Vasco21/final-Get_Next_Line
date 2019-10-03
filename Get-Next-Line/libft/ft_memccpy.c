/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 11:42:38 by veti              #+#    #+#             */
/*   Updated: 2019/07/30 10:47:37 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The memccpy() function copies bytes from string src to string dst
** If the character c (as converted to an unsigned char) occurs in the string
** src, the copystops and a pointer to the byte after the copy of c
** in the string dst is returned.Otherwise, n bytes are copied, and a NULL
** pointer is returned.The source and destination strings should not overlap,
** as the behavior is undefined.
*/

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*s1;
	unsigned char	*s2;

	i = 0;
	s1 = (unsigned char *)dest;
	s2 = (unsigned char *)src;
	while (i < n)
	{
		s1[i] = s2[i];
		if (s1[i] == (unsigned char)c || s2[i] == (unsigned char)c)
			return (dest + (++i));
		i++;
	}
	return (NULL);
}
