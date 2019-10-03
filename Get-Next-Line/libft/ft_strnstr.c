/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 15:14:37 by veti              #+#    #+#             */
/*   Updated: 2019/08/15 17:32:15 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*l;

	l = little;
	if (*l == '\0')
		return ((char*)big);
	while (len--)
	{
		if (*l == *big)
			l++;
		else
		{
			big -= (l - little);
			len += (l - little);
			l = little;
		}
		big++;
		if (*l == '\0')
			return ((char*)(big - (l - little)));
		if (*big == '\0')
			break ;
	}
	return (NULL);
}
