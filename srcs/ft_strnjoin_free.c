/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:32:40 by sbeheret          #+#    #+#             */
/*   Updated: 2018/01/12 15:43:35 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin_free(char **s1, char *s2, int len, int len2)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!(str = (char*)malloc(len + len2 + 1)))
		return (NULL);
	while (++i < len)
		str[i] = (*s1)[i];
	free((*s1));
	while (++j < len2)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
