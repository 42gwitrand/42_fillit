/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vault.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 04:24:44 by laymard           #+#    #+#             */
/*   Updated: 2017/08/16 15:20:20 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

static int		*getx(char **map, int xval, int y, int x)
{
	int		*pt;
	int		ft;
	int		piece;

	pt = (int*)malloc(sizeof(int) * 4);
	piece = 0;
	while (y < 4)
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == '#')
			{
				pt[piece] = (x - xval);
				if (piece == 0)
					ft = pt[piece];
				if (ft)
					pt[piece] -= 1;
				piece++;
			}
			x++;
		}
		y++;
	}
	return (pt);
}

static int		*gety(char **map, int yval, int y, int x)
{
	int		*pt;
	int		ft;
	int		piece;

	pt = (int*)malloc(sizeof(int) * 4);
	piece = 0;
	while (y < 4)
	{
		x = 0;
		while (map[y][x])
		{
			if (map[y][x] == '#')
			{
				pt[piece] = (y - yval);
				if (piece == 0)
					ft = pt[piece];
				if (ft)
					pt[piece] -= 1;
				piece++;
			}
			x++;
		}
		y++;
	}
	return (pt);
}

static void		find_char(int *x, int *y, char **map)
{
	int i;
	int j;

	i = 3;
	while (i >= 0)
	{
		j = 3;
		while (j >= 0)
		{
			if (map[i][j] == '#')
			{
				if (i < *y)
					*y = i;
				if (j < *x)
					*x = j;
			}
			j--;
		}
		i--;
	}
}

void			vault(t_tetri **fillst, char *str, unsigned int i)
{
	char	**map;
	int		*x;
	int		*y;

	x = (int*)malloc(sizeof(int) * 1);
	y = (int*)malloc(sizeof(int) * 1);
	*x = 4;
	*y = 4;
	map = ft_strsplit(str, '\n');
	find_char(x, y, map);
	if (i == 0)
		*fillst = charcrea(i, getx(map, *x, 0, 0), gety(map, *y, 0, 0));
	else
		charadd(fillst, charcrea(i, getx(map, *x, 0, 0), gety(map, *y, 0, 0)));
	free(x);
	free(y);
}
