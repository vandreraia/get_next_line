/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:22:57 by vraia             #+#    #+#             */
/*   Updated: 2018/10/31 15:55:42 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*xdest;
	const char	*xsrc;

	i = 0;
	xdest = (char*)dest;
	xsrc = (char*)src;
	if (xdest > xsrc)
	{
		while ((int)n-- > 0)
			xdest[n] = xsrc[n];
	}
	else
	{
		while (n > i)
		{
			xdest[i] = xsrc[i];
			i++;
		}
	}
	return ((void*)dest);
}
