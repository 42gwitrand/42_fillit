/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:55:36 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:55:37 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t n)
{
	size_t	i;

	i = 0;
	if (!*search)
		return ((char *)str);
	while (str[i] && (i + ft_strlen(search) <= n))
	{
		if (ft_strnequ(&str[i], search, ft_strlen(search)))
			return ((char *)&str[i]);
		++i;
	}
	return (NULL);
}
