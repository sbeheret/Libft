/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 09:22:21 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/09 18:17:52 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	sv;

	i = 0;
	sv = -1;
	if (c == 0)
		return ((char*)&s[ft_strlen(s)]);
	c = (unsigned char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			sv = i;
		i++;
	}
	if (sv >= 0)
		return ((char*)&s[sv]);
	else
		return (NULL);
}
