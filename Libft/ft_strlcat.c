/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 13:28:40 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 13:28:44 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	char	*s;
	size_t	n;
	size_t	dlen;
	size_t	rest;

	d = dst;
	s = (char *)src;
	n = size;
	while (*d && n--)
		++d;
	dlen = d - dst;
	rest = size - dlen;
	if (rest == 0)
		return (dlen + ft_strlen(src));
	while (*s && rest > 1)
	{
		*d = *s;
		++d;
		--rest;
		++s;
	}
	*d = '\0';
	return (dlen + ft_strlen(src));
}
