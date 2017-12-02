/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:52:40 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:52:42 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(const char *str1, const char *str2)
{
	if (str1 && str2)
		return (ft_strnequ(str1, str2, ft_strlen(str2) + 1));
	return (0);
}
