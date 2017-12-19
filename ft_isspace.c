/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:31:32 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/24 15:55:37 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	if (c == '\v')
		return (1);
	else if (c == '\t')
		return (1);
	else if (c == '\r')
		return (1);
	else if (c == '\f')
		return (1);
	else if (c == ' ')
		return (1);
	else if (c == '\n')
		return (1);
	else
		return (0);
}
