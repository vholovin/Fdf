/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/29 18:24:22 by vholovin          #+#    #+#             */
/*   Updated: 2016/12/29 14:13:14 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_sqrt(int nb)
{
	int buf;
	int i;

	i = 0;
	buf = 0;
	while (nb > buf)
	{
		i++;
		buf = i * i;
	}
	if (buf == nb)
	{
		return (i);
	}
	return (0);
}
