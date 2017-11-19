/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/12 15:51:13 by maechard          #+#    #+#             */
/*   Updated: 2017/05/02 18:23:16 by maechard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	char			*dest;
	const char		*sourc;

	dest = dst;
	sourc = src;
	i = 0;
	while (i < len)
	{
		dest[i] = sourc[i];
		i++;
	}
	return (dst);
}
