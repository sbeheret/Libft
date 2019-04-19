/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:04:00 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 14:22:03 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The first 3 lines are here to make it safe to mutiply by -1
**	in case of INT_MIN
*/
void	ft_putnbr(int n)
{
	int	mod;

	mod = n % 10;
	if (n == IMIN)
		n++;
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	ft_putchar((mod < 0 ? -mod : mod) + 48);
}
