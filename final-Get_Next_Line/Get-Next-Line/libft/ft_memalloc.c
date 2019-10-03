/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: veti <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/19 02:43:56 by veti              #+#    #+#             */
/*   Updated: 2019/08/21 14:10:15 by veti             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*mem;
	char	*p;

	mem = (char*)malloc(size);
	if (mem == NULL)
		return (NULL);
	p = mem;
	while (size--)
		*p++ = 0;
	return (mem);
}
