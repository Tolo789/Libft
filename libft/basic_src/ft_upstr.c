/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmutti <cmutti@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/04 20:30:01 by cmutti            #+#    #+#             */
/*   Updated: 2016/02/04 20:34:31 by cmutti           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_upstr(char **str)
{
	size_t	i;

	i = 0;
	while (str[0][i])
	{
		if (str[0][i] > 96 && str[0][i] < 123)
			str[0][i] -= 32;
		i++;
	}
}
