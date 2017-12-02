/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 11:00:33 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 11:00:34 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*tmp;

	if (!s1 || !s2)
		return (NULL);
	tmp = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (tmp)
	{
		ft_strcat(tmp, s1);
		ft_strcat(tmp, s2);
	}
	return (tmp);
}
