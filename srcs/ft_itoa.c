/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:14:38 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 13:14:15 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
**	This function calculates the necessary size of destination string
**	to allocate enough memory to hold the number
*/
static int	length(int nb)
{
	int	res;

	res = 0;
	if (nb < 0)
		res++;
	while (nb <= -10 || nb >= 10)
	{
		nb = nb / 10;
		res++;
	}
	return (res);
}

/*
**	Allocate the string. Exception if nb == 0.
**	Cast nb to long type, to avoid errors with INT_MIN when multiplying by -1.
** 	Make the converstion of number to string.
**	Return the string.
*/
char		*ft_itoa(int nb)
{
	long	number;
	int 	len;
	char	*str;

	len = length(nb);
	if (!(str = (char*)malloc(len + 2)))
		return (NULL);
	if (nb == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	number = nb < 0 ? -(long)nb : (long)nb;
	if (nb < 0) {
		str[0] = '-';
	}
	str[len + 1] = '\0';
	while (number != 0)
	{
		str[len] = number % 10 + '0';
		number = number / 10;
		len--;
	}
	return (str);
}
