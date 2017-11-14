/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/09 13:32:07 by tiskow            #+#    #+#             */
/*   Updated: 2017/11/14 10:20:58 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

int		size_finder(t_tetri *lst)
{
	unsigned int	size;
	unsigned int	i;

	size = charcount(&lst);
	size *= 4;
	i = 0;
	while (!i)
	{
		i = get_sqrt(1, size);
		size++;
	}
	return (i);
}

char	**map_creator(unsigned int i)
{
	unsigned int	j;
	char			**map;

	j = 0;
	if (!(map = (char**)malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	while (j < i)
	{
		map[j] = ft_strnew(i + 1);
		map[j] = ft_memset(map[j], '.', i);
		j++;
	}
	map[j] = 0;
	return (map);
}
