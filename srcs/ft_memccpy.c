/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:48:12 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/24 15:23:20 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*copy;
	const unsigned char	*source;

	i = 0;
	c = (unsigned char)c;
	copy = dst;
	source = src;
	while (i < n && source[i] != c)
	{
		copy[i] = source[i];
		i++;
	}
	if (i == n)
		return (NULL);
	copy[i] = c;
	return ((void*)copy);
}
