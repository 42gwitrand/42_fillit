/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gwitrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 10:59:47 by gwitrand          #+#    #+#             */
/*   Updated: 2017/11/11 10:59:48 by gwitrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_putnbr_fd(int nb, int fd)
{
	if (nb == 0)
		ft_putchar_fd('0', fd);
	if (nb < 0 && nb > -2147483647)
	{
		ft_putchar_fd('-', fd);
		nb = -nb;
	}
	if (nb >= 10 && nb <= 2147483647)
	{
		ft_putnbr_fd(nb / 10, fd);
		ft_putnbr_fd(nb % 10, fd);
	}
	if (nb > 0 && nb < 10)
		ft_putchar_fd('0' + nb, fd);
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', fd);
		nb = 214748364;
		ft_putnbr_fd(nb, fd);
		ft_putchar_fd('8', fd);
	}
	else
		return ;
}
