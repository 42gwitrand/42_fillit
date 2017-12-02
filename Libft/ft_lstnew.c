/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:57:03 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:57:05 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*ret;

	ret = ft_memalloc(sizeof(t_list));
	if (ret)
	{
		if (content)
		{
			ret->content_size = content_size;
			ret->content = ft_memalloc(content_size);
			ret->content = ft_memcpy(ret->content, content, content_size);
		}
		else
		{
			ret->content = NULL;
			ret->content_size = 0;
		}
	}
	return (ret);
}
