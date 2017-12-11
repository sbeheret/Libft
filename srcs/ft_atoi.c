/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:45:15 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/24 15:47:16 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(const char *str, int *neg)
{
	int	i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == ' '
			|| str[i] == '\t' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		*neg = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] == '0')
		i++;
	if (str[i] <= '9' && str[i] >= '0')
		return (i);
	else
		return (-1);
}

int			ft_atoi(const char *str)
{
	unsigned long	feuille;
	int				res;
	int				i;
	int				neg;

	res = 0;
	feuille = 0;
	neg = 1;
	if ((i = check(str, &neg)) < 0)
		return (0);
	while (str[i] <= '9' && str[i] >= '0' && feuille < 9223372036854775807)
	{
		feuille = feuille * 10 + str[i] - 48;
		i++;
	}
	if (feuille >= 9223372036854775807 && neg > 0)
		return (-1);
	else if (feuille > 9223372036854775807 && neg < 0)
		return (0);
	return ((int)(neg * feuille));
}
