/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 14:51:57 by vraia             #+#    #+#             */
/*   Updated: 2018/10/26 21:42:12 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *begin;

	begin = (char *)s;
	while (*s)
		s++;
	if (c == '\0')
		return ((char*)s);
	s--;
	while (*s != c && *s && (s != begin))
		s--;
	if (*s == c)
		return ((char*)s);
	else
		return (NULL);
}
