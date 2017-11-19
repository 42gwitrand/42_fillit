/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 01:04:41 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/16 20:12:23 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_tetri		*tetriminos_vault(char *av, unsigned int verif)
{
	t_tetri				*tetriminos;
	char				str[21];
	unsigned int		i;
	int					fd;
	int					res;

	i = 0;
	fd = open(av, O_RDONLY);
	if (fd == -1)
		return (error("error"));
	while ((res = read(fd, str, 21)))
	{
		str[res - 1] = '\0';
		if (res == 21)
			verif++;
		if (!tetcheck(str) || i == 26 || res < 20)
			return (error("error"));
		vault(&tetriminos, str, i);
		i++;
	}
	if (i == 0 || verif == i)
		return (error("error"));
	close(fd);
	return (tetriminos);
}

int			main(int argc, char **argv)
{
	char			**map;
	t_tetri			*temp;
	unsigned int	solved;
	unsigned int	size;

	solved = 0;
	if (argc != 2)
		return (int_error("usage: ./Fillit fichier"));
	temp = tetriminos_vault(argv[1], 0);
	if (!temp)
		return (0);
	size = size_finder(temp);
	while (!solved)
	{
		map = map_creator(size);
		solved = fill(size, 0, map, &temp);
		if (!solved)
			size++;
	}
	chdel(&temp, &chardeluni);
	print_map(map, size);
	return (1);
}
