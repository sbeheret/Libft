/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:17:49 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/16 12:11:14 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int i;
	int	j;

	i = 0;
	j = 0;
	if (needle[0] == '\0')
		return ((char*)haystack);
	while (haystack[j] != '\0')
	{
		while (haystack[j + i] == needle[i] && needle[i] != '\0')
			i++;
		if (needle[i] == '\0')
			return ((char*)&haystack[j]);
		j++;
		i = 0;
	}
	return (NULL);
}
