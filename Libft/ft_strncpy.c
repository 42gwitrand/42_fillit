/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:51:10 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:51:12 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	ft_memcpy(dest, src, n);
	if (ft_strlen(src) < n)
		ft_bzero(&dest[ft_strlen(dest)], (n - ft_strlen(dest)));
	return (dest);
}
