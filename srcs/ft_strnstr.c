/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:46:25 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 14:58:38 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	We iterate through haystack
**	If haystack's character equals needle's first character
**	We iterate through both, while they're equal.
**	If we reached the end of needle, it means we found it in haystack.
*/
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
