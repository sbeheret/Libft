/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:56:46 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/16 16:41:28 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		ret;
	int		i;
	size_t	j;
	int		d;
	int		max;

	i = 0;
	j = ft_strlen(dst);
	d = j;
	if (size <= j)
		return (size + ft_strlen(src));
	max = size - d - 1;
	ret = j + ft_strlen(src);
	while (i < max && src[i] != '\0')
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	dst[j] = '\0';
	return (ret);
}
