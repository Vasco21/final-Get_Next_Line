/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/22 09:20:59 by veti              #+#    #+#             */
/*   Updated: 2019/08/15 16:11:07 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** strlcat() appends string src to the end of dst.  It will append at most
** dstsize
** - strlen(dst) - 1 characters It will then NUL-terminate, unless dstsize is
** 0 or the original dst string was longer than dstsize (in practice this should
** not happen as it means that either dstsize is incorrect or that dst is not a
** proper string).
*/

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;

	i = 0;
	while (dst[i] != '\0')
		++i;
	len = 0;
	while (src[len] != '\0')
		++len;
	if (dstsize <= i)
		len += dstsize;
	else
		len += i;
	j = 0;
	while (src[j] != '\0' && (i + 1) < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (len);
}
