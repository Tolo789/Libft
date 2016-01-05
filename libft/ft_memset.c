/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmutti <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/26 13:25:46 by cmutti            #+#    #+#             */
/*   Updated: 2015/11/26 13:25:49 by cmutti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*s;

	s = (char*)b;
	i = 0;
	while (i < len)
	{
		s[i] = (unsigned int)c;
		i++;
	}
	b = (void*)s;
	return (b);
}
