/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 11:25:11 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/17 12:00:55 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*str;
	const unsigned char	*str2;

	i = 0;
	str = (const unsigned char*)s1;
	str2 = (const unsigned char*)s2;
	while (i < n && str[i] == str2[i])
		i++;
	if (i == n)
		return (0);
	return (str[i] - str2[i]);
}
