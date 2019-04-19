/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 11:45:15 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 16:27:42 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Everything done in this file is done to mimic the behavior of atoi().

/*
**	With this function we skip all the whitespaces,
**	Get the sign (positive or negative),
**	Skip possible precedings zeros,
**	and Check if there is indeed a number or not
*/
static int	check(const char *str, int *negative)
{
	int	i;

	i = 0;
	while (str[i] == '\n' || str[i] == '\v' || str[i] == ' '
			|| str[i] == '\t' || str[i] == '\r' || str[i] == '\f')
		i++;
	if (str[i] == '-')
	{
		*negative = -1;
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

/*
**	if we have the digit '9' which has the ascii value of 57,
**	Substract '0' (== 48) to get its integer value.
** '9' - '0' = 57 - 48 = 9
*/
int			ft_atoi(const char *str)
{
	unsigned long	number;
	int						i;
	int						negative;

	number = 0;
	negative = 1;
	if ((i = check(str, &negative)) < 0)
		return (0);
	while (str[i] <= '9' && str[i] >= '0' && number < 9223372036854775807)
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	if (number >= 9223372036854775807 && negative > 0)
		return (-1);
	else if (number > 9223372036854775807 && negative < 0)
		return (0);
	return ((int)(negative * number));
}
