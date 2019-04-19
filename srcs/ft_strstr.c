/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:17:49 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 15:29:32 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	We iterate through haystack
**	If haystack's character equals needle's first character
**	We iterate through both, while they're equal.
**	If we reached the end of needle, it means we found it in haystack.
*/
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
