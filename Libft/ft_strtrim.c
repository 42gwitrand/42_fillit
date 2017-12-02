/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:51:56 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:51:58 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str)
{
	int	st;
	int	end;

	if (!str)
		return (NULL);
	st = 0;
	end = ft_strlen((char *)str) - 1;
	while (str[st] == ' ' || str[st] == '\n' || str[st] == '\t')
		st++;
	while (str[end] == ' ' || str[end] == '\n' || str[end] == '\t')
		end--;
	return ((end < st) ? ft_strnew(0) : ft_strsub(str, st, end - st + 1));
}
