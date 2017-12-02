/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:56:16 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:56:19 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *str, unsigned int start, size_t len)
{
	char	*tmp;

	tmp = ft_strnew(len);
	if (tmp && str)
		tmp = ft_strncpy(tmp, &str[start], len);
	return (tmp);
}
