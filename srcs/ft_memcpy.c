/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 09:42:47 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 13:44:31 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*copy;
	const char	*source;

	copy = dst;
	source = src;
	if (src == dst)
		return (dst);
	i = 0;
	while (i < n)
	{
		copy[i] = source[i];
		i++;
	}
	return (dst);
}
