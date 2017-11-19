/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   charfunctions.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laymard <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/11 00:34:27 by laymard           #+#    #+#             */
/*   Updated: 2017/08/16 14:53:44 by laymard          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Libft/libft.h"

t_tetri			*charcrea(unsigned int i, int *coox, int *cooy)
{
	t_tetri *new;

	if (!(new = malloc(sizeof(t_tetri))))
		return (NULL);
	if (new)
	{
		if (coox == NULL || cooy == NULL)
		{
			new->x = NULL;
			new->y = NULL;
			new->symbol = 0;
		}
		else
		{
			new->symbol = (char)(i + 65);
			if (!(new->x = ft_memalloc(4 * 4)) ||
				!(new->y = ft_memalloc(4 * 4)))
				return (NULL);
			new->x = (int*)ft_memcpy(new->x, coox, 4 * 4);
			new->y = (int*)ft_memcpy(new->y, cooy, 4 * 4);
			max(&new);
		}
		new->next = NULL;
	}
	return (new);
}

void			charadd(t_tetri **fillst, t_tetri *lst)
{
	t_tetri *tmp;

	tmp = *fillst;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = lst;
}

int				charcount(t_tetri **fillst)
{
	t_tetri *lst;
	int		i;

	i = 0;
	lst = *fillst;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}

void			chardeluni(t_tetri **fillst, void (*del)(void**))
{
	if (fillst != NULL)
	{
		del((void**)&(*fillst)->x);
		del((void**)&(*fillst)->y);
		free(*fillst);
		*fillst = NULL;
	}
}

void			chdel(t_tetri **f, void (*d)(t_tetri**, void (*d)(void**)))
{
	t_tetri *temp;
	t_tetri *lst;

	lst = *f;
	if (!lst)
		return ;
	while (lst)
	{
		temp = lst->next;
		d(&lst, &ft_memdel);
		lst = temp;
	}
	*f = NULL;
}
