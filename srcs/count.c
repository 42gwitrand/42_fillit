/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/14 17:14:21 by laymard           #+#    #+#             */
/*   Updated: 2017/08/16 13:12:20 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

static int	obtainx(char **map)
{
	return (ft_strlen(map[0]));
}

static int	obtainy(char **map)
{
	int i;

	i = 0;
	while (map[i] != 0)
		i++;
	return (i);
}

static void	delcount(char **map, int x, int y)
{
	if (map[x][y] == '#')
	{
		map[x][y] = '.';
		if (x > 0)
			delcount(map, x - 1, y);
		if (x < obtainx(map) - 1)
			delcount(map, x + 1, y);
		if (y > 0)
			delcount(map, x, y - 1);
		if (y < obtainy(map) - 1)
			delcount(map, x, y + 1);
	}
}

int			count(char **map)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (j < obtainy(map))
	{
		while (i < obtainx(map))
		{
			if (map[i][j] == '#')
			{
				k++;
				delcount(map, i, j);
			}
			i++;
		}
		i = 0;
		j++;
	}
	return (k);
}
