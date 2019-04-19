/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:56:46 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 14:34:15 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		ret;
	int		i;
	size_t	len;
	int		max;

	i = 0;
	len = ft_strlen(dst);
	if (size <= len)
		return (size + ft_strlen(src));
	max = size - len - 1;
	ret = len + ft_strlen(src);
	while (i < max && src[i] != '\0')
	{
		dst[len] = src[i];
		len++;
		i++;
	}
	dst[len] = '\0';
	return (ret);
}
