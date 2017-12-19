/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:48:12 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/17 12:09:50 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*str;
	const unsigned char	*str2;

	i = 0;
	c = (unsigned char)c;
	str = dst;
	str2 = src;
	while (i < n && str2[i] != c)
	{
		str[i] = str2[i];
		i++;
	}
	if (i == n)
		return (NULL);
	str[i] = c;
	return (dst + i + 1);
}
