/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assign.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 01:04:41 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/14 10:18:15 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/libft.h"

void	*error(char *message)
{
	ft_putstr(message);
	ft_putchar('\n');
	return (NULL);
}

void	print_map(char **map, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		ft_putstr(map[i]);
		ft_putchar('\n');
		i++;
	}
}

int		get_sqrt(int i, int j)
{
	if (i * i > j)
		return (0);
	if (i * i == j)
		return (i);
	else
		return (get_sqrt(i + 1, j));
}

int		find_high(int *nb)
{
	int i;
	int j;

	i = 3;
	j = 0;
	while (i > -1)
	{
		if (nb[i] > j)
			j = nb[i];
		i--;
	}
	return (j);
}

void	max(t_tetri **lst)
{
	t_tetri *new;

	new = *lst;
	new->j = find_high(new->x);
	new->i = find_high(new->y);
}