/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/17 15:58:14 by veti              #+#    #+#             */
/*   Updated: 2019/07/30 11:34:52 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The stpncpy() and strncpy() functions copy at most len characters from src
** into dst If src is less than len characters long, the remainder of dst is
** filled with `\0' characterserOtherwise, dst is not terminated.
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
