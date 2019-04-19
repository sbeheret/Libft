/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:11:58 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 13:28:10 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*str;
	size_t							i;

	c = (unsigned char)c;
	i = 0;
	str = s;
	while (i < n)
	{
		if (str[i] == c)
			return ((void*)s + i);
		i++;
	}
	return (NULL);
}
