/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   spot.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 01:04:41 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/16 20:12:23 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		valid_place(int line, int column, char **map, t_tetri *lst)
{
	int i;
	int x;
	int y;

	i = 3;
	while (i >= 0)
	{
		x = lst->x[i];
		y = lst->y[i];
		if (map[line + y][column + x] != '.')
			return (0);
		i--;
	}
	return (1);
}

t_tetri	**keep(int line, int column, char **map, t_tetri *lst)
{
	int i;
	int x;
	int y;

	i = 3;
	while (i >= 0)
	{
		x = lst->x[i];
		y = lst->y[i];
		map[line + y][column + x] = lst->symbol;
		i--;
	}
	return (&lst->next);
}

void	restart(int line, int column, char **map, t_tetri *lst)
{
	int i;
	int x;
	int y;

	i = 3;
	while (i >= 0)
	{
		x = lst->x[i];
		y = lst->y[i];
		map[line + y][column + x] = '.';
		i--;
	}
}

int		fill(int i, int line, char **map, t_tetri **fillst)
{
	t_tetri	*lst;
	int		column;
	int		solved;

	lst = *fillst;
	solved = 0;
	if (!lst)
		return (1);
	while (line < i - lst->i)
	{
		column = 0;
		while (column < i - lst->j)
		{
			solved = valid_place(line, column, map, lst);
			if (solved)
			{
				if (fill(i, 0, map, keep(line, column, map, lst)))
					return (1);
				restart(line, column, map, lst);
			}
			column++;
		}
		line++;
	}
	return (0);
}
