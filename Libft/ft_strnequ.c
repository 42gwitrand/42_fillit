/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:00:54 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 11:00:55 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(const char *str1, const char *str2, size_t n)
{
	if (!str1 || !str2)
		return (1);
	if (ft_strncmp(str1, str2, n))
		return (0);
	return (1);
}
