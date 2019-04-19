/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 19:53:22 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 14:16:15 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	The first 3 lines are here to make it safe to mutiply by -1
**	in case of INT_MIN
*/
void	ft_putnbr_fd(int n, int fd)
{
	int	mod;

	mod = n % 10;
	if (n == IMIN)
		n++;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_fd(n / 10, fd);
	ft_putchar_fd((mod < 0 ? -mod : mod) + 48, fd);
}
