/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vholovin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/26 18:24:47 by vholovin          #+#    #+#             */
/*   Updated: 2016/12/26 18:48:02 by vholovin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(char *s)
{
	int					minus;
	unsigned long int	n;

	minus = 1;
	n = 0;
	while (*s == ' ' || *s == '\t' || *s == '\v'
			|| *s == '\f' || *s == '\r' || *s == '\n')
		s++;
	if (*s == '+')
		s++;
	else if (*s == '-')
	{
		minus = -1;
		s++;
	}
	while ((*s <= '9') && (*s >= '0'))
	{
		n = (n * 10) + (*s - '0');
		if (n >= 9223372036854775807 && minus == 1)
			return (-1);
		else if (n > 9223372036854775807 && minus == -1)
			return (0);
		s++;
	}
	return (int)(n * minus);
}