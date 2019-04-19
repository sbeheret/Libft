/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 18:57:08 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 15:31:13 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t length)
{
	size_t	i;
	char	*str;

	i = 0;
	if (s == NULL || length <= 0 || start < 0)
		return (NULL);
	if (!(str = (char*)malloc(length + 1)))
		return (NULL);
	while (i < length)
	{
		str[i] = s[start];
		i++;
		start++;
	}
	str[i] = '\0';
	return (str);
}
