/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:50:29 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:50:31 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *str, char c)
{
	char	**split;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	split = ft_memalloc(sizeof(split) * ft_countsplit(str, c) + 1);
	if (!split)
		return (NULL);
	while (str[i])
	{
		if (ft_strclen(&str[i], c))
			split[j++] = ft_strsub(str, i, ft_strclen(&str[i], c));
		i += ft_strclen(&str[i], c) ? ft_strclen(&str[i], c) : 1;
	}
	split[j] = NULL;
	return (split);
}
