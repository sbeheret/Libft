/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 16:14:38 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/15 12:58:57 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	length(int n)
{
	int	res;

	res = 0;
	if (n < 0)
		res++;
	while (n <= -10 || n >= 10)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

char		*ft_itoa(int n)
{
	long	len;
	int		i;
	char	*str;

	len = length(n);
	if (!(str = (char*)malloc(len + 2)))
		return (NULL);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	i = len;
	str[len + 1] = '\0';
	len = n;
	while (len > 0 || len < 0)
	{
		str[i] = ABS(len) % 10 + 48;
		len = len / 10;
		i--;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}
