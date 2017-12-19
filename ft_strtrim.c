/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:37:05 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/15 12:54:40 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	b;
	int	e;

	b = 0;
	e = 0;
	if (s == NULL)
		return (NULL);
	while (s[b] == ' ' || s[b] == '\n' || s[b] == '\t')
		b++;
	while (s[e] != '\0')
		e++;
	e--;
	while (s[e] == ' ' || s[e] == '\n' || s[e] == '\t')
		e--;
	if (s[b] == '\0')
		return (ft_strsub(s, 0, 0));
	else
		return (ft_strsub(s, b, e - b + 1));
}
