/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/25 16:51:04 by vraia             #+#    #+#             */
/*   Updated: 2018/10/30 13:43:02 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t i;
	size_t start;
	size_t end;

	end = 0;
	i = 0;
	start = 0;
	while (s2[end] != '\0')
		end++;
	if (end == 0)
		return ((char *)s1);
	while (s1[i] && i < len)
	{
		while (s1[i + start] == s2[start] && (i + start) < len)
		{
			if (start == end - 1)
				return ((char *)s1 + i);
			start++;
		}
		start = 0;
		i++;
	}
	return (0);
}
