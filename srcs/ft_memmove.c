/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:24:33 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/15 11:03:25 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		*ds;
	const char	*sc;
	char		*md;

	ds = dst;
	sc = src;
	i = 0;
	md = (char*)malloc(sizeof(char) * len + 1);
	if (md == NULL)
		return (dst);
	while (i < len)
	{
		md[i] = sc[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		ds[i] = md[i];
		i++;
	}
	free(md);
	return (dst);
}
