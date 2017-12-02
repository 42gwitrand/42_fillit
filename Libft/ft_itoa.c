/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:57:10 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:57:11 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_itoa(int n)
{
	size_t			intlen;
	unsigned int	nb;
	char			*tmp;

	nb = (n < 0) ? -n : n;
	intlen = ft_intlen(nb);
	tmp = ft_memalloc(intlen);
	if (!tmp)
		return (NULL);
	while (nb)
	{
		tmp[intlen--] = (nb % 10 + 48);
		nb = nb / 10;
	}
	tmp[intlen] = (n == 0) ? '0' : '-';
	tmp = (n > 0) ? ft_strdup(&tmp[1]) : ft_strdup(tmp);
	return (tmp);
}
