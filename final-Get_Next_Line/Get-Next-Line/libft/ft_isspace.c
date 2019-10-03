/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:05:36 by veti              #+#    #+#             */
/*   Updated: 2019/08/19 02:26:19 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** checks whether the passed character is white space.
*/

#include "libft.h"

int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f'
			|| c == '\r' || c == ' ')
		return (1);
	return (0);
}
