/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:22:20 by vraia             #+#    #+#             */
/*   Updated: 2018/10/25 23:22:27 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*xdest;
	const char	*xsrc;

	i = 0;
	xdest = (char*)dest;
	xsrc = (char*)src;
	while (n > i)
	{
		xdest[i] = xsrc[i];
		i++;
	}
	return (dest);
}
