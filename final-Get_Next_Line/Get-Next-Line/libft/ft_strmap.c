/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/23 09:45:08 by veti              #+#    #+#             */
/*   Updated: 2019/08/23 09:54:02 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*map;

	dst = NULL;
	map = NULL;
	if (s || f)
	{
		if (!(dst = ft_strnew(ft_strlen(s))))
			return (NULL);
		map = dst;
		if (s && f)
			while (*s)
				*dst++ = f((char)*s++);
	}
	return (map);
}
