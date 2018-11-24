/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 17:27:22 by vraia             #+#    #+#             */
/*   Updated: 2018/10/28 13:40:20 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		len;
	char	*new;

	if (!s)
		return (0);
	i = -1;
	j = 0;
	len = ft_strlen(s);
	while ((s[len - 1] == ' ' || s[len - 1] == '\t' ||
				s[len - 1] == '\n') && len > 1)
		len--;
	while (s[++i] == ' ' || s[i] == '\t' || s[i] == '\n')
		len--;
	if (len < 0)
		len = 0;
	if (!(new = (char *)malloc(sizeof(char) * (len) + 1)))
		return (0);
	while (j < len)
		new[j++] = s[i++];
	new[j] = '\0';
	return (new);
}
