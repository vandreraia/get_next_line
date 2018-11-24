/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vraia <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/02 14:30:31 by vraia             #+#    #+#             */
/*   Updated: 2018/11/02 18:04:24 by vraia            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *lstnew;

	if (!(lstnew = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	if (content != NULL)
	{
		if (!(lstnew->content = (void*)malloc(content_size)))
			return (NULL);
		ft_memcpy((lstnew->content), content, content_size);
		lstnew->content_size = content_size;
	}
	else
	{
		lstnew->content = NULL;
		lstnew->content_size = 0;
	}
	lstnew->next = NULL;
	return (lstnew);
}
