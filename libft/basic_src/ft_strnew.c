/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmutti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:12:47 by cmutti            #+#    #+#             */
/*   Updated: 2015/11/25 11:12:48 by cmutti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnew(size_t size)
{
	char	*newelem;
	size_t	i;

	i = 0;
	newelem = (char*)ft_memalloc(sizeof(*newelem) * (size + 1));
	if (newelem)
		return (newelem);
	return (NULL);
}
