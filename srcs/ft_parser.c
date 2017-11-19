/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maechard <maechard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/19 16:27:32 by maechard          #+#    #+#             */
/*   Updated: 2017/08/16 14:15:17 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

static void	put_as_null(int *ft, int *sd, int *td)
{
	*ft = 0;
	*sd = 0;
	*td = 0;
}

static int	ft_mapsize(char *str, int i)
{
	int j;
	int k;
	int l;

	put_as_null(&j, &k, &l);
	while (str[i])
	{
		if (str[i] == '.' || str[i] == '#')
			k++;
		if (str[i] == '#')
			j++;
		if (str[i] == '\n')
		{
			if (k != 4 || i > 19)
				return (0);
			l++;
			k = 0;
		}
		if (str[i + 1] == '\0' && k == 4)
			l++;
		i++;
	}
	if (l != 4 || j != 4)
		return (0);
	return (1);
}

int			tetcheck(char *str)
{
	if (ft_mapsize(str, 0) && count(ft_strsplit(str, '\n')) == 1)
		return (1);
	return (0);
}
