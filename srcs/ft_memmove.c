/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 10:24:33 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 13:54:29 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	char				*copy;
	const char	*source;
	char				*tmp;

	copy = dst;
	source = src;
	tmp = (char*)malloc(sizeof(char) * len + 1);
	if (tmp == NULL)
		return (dst);
	i = 0;
	while (i < len)
	{
		tmp[i] = source[i];
		i++;
	}
	i = 0;
	while (i < len)
	{
		copy[i] = tmp[i];
		i++;
	}
	free(tmp);
	return (dst);
}
