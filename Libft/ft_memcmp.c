/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:57:37 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:57:38 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && (((unsigned char *)str1)[i] == ((unsigned char *)str2)[i]))
		i++;
	if (i == n)
		return (0);
	return (((unsigned char *)str1)[i] - ((unsigned char *)str2)[i]);
}
