/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin_free.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/12 15:32:40 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 15:47:32 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Copy up to len1 chars from s1 to str
**	Free (s1)
**	Append up to len2 chars from s2 to str.
**	Add terminating nul byte, return str.
*/
char	*ft_strnjoin_free(char **s1, char *s2, int len1, int len2)
{
	char	*str;
	int		i;
	int		j;

	i = -1;
	j = -1;
	if (!(str = (char*)malloc(len1 + len2 + 1)))
		return (NULL);
	while (++i < len1)
		str[i] = (*s1)[i];
	free((*s1));
	while (++j < len2)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}
