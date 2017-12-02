/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 21:39:22 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/09 21:39:25 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	len;

	n = ft_min(n, ft_strlen(src) + 1);
	len = ft_strlen(dest) + n;
	ft_strncpy(&dest[ft_strlen(dest)], src, n);
	if (len <= ft_strlen(dest))
		ft_bzero(&dest[len], 1);
	return (dest);
}
