/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:53:01 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:53:03 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	while (n)
	{
		if (*(unsigned char *)str == (unsigned char)c)
			return ((unsigned char *)str);
		++str;
		--n;
	}
	return (NULL);
}
