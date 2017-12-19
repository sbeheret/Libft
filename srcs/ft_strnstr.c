/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:46:25 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/17 11:32:23 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (j < len && haystack[j] != '\0')
	{
		while (haystack[j + i] == needle[i] && needle[i] != '\0' && i + j < len)
			i++;
		if (needle[i] == '\0')
			return ((char*)&haystack[j]);
		j++;
		i = 0;
	}
	return (NULL);
}
