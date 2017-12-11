/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:43:23 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/17 12:06:09 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	count_words(char const *s, char c)
{
	int	i;
	int	nb;

	nb = 0;
	i = 0;
	if (s == NULL)
		return (-12);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			nb++;
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	return (nb);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		nb;
	int		j;
	int		start;

	start = 0;
	j = 0;
	i = 0;
	nb = count_words(s, c);
	if (nb == -12 || !(tab = (char**)malloc(sizeof(char*) * nb + 1)))
		return (NULL);
	tab[nb] = NULL;
	while (i < nb)
	{
		while (s[j] == c)
			j++;
		start = j;
		while (s[j] != c && s[j] != '\0')
			j++;
		if (s[start] != '\0')
			tab[i] = ft_strsub(s, start, j - start);
		i++;
	}
	return (tab);
}
