/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmutti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 11:05:51 by cmutti            #+#    #+#             */
/*   Updated: 2015/11/24 11:05:55 by cmutti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_abs(int n)
{
	if (n < 0)
		n = -n;
	return (n);
}

void		ft_putnbr(int n)
{
	if (n < 0)
		ft_putchar('-');
	if (n < 10 && n > -10)
		ft_putchar('0' + ft_abs(n));
	else
	{
		ft_putnbr(ft_abs(n / 10));
		ft_putchar('0' + ft_abs(n % 10));
	}
}
