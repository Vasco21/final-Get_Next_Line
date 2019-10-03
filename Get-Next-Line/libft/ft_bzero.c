/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/08 14:54:14 by veti              #+#    #+#             */
/*   Updated: 2019/09/02 15:31:41 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The bzero() function writes n zeroed bytes to the string s.
**If n is zero, bzero() does nothing.
*/
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = (unsigned char *)s;
	while (n--)
		str[i++] = 0;
}
