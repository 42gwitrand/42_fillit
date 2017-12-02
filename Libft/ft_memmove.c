/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:00:17 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 11:00:18 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*tmp;

	tmp = ft_memalloc(n + 1);
	if (tmp)
	{
		ft_memcpy(tmp, src, n);
		ft_memcpy(dest, tmp, n);
		free(tmp);
	}
	return (dest);
}
