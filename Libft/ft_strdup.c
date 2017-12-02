/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:50:21 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:50:23 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*tmp;

	tmp = ft_strnew(ft_strlen(str));
	if (tmp)
		ft_strcpy(tmp, str);
	return (tmp);
}
