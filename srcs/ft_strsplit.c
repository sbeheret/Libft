/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 17:43:23 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 15:24:00 by sbeheret         ###   ########.fr       */
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
		return (-1);
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

/*
**	(i) index of s
**	(k) index of tab
**	(start) stores the beginning of each new word
**
**	Here's how the while loop works:
**	Skip all occurences to c
**	Save index in start
**	Get to the end of the word
**	Save an allocated string, of the word, into tab
**	repeat until end of string
*/
char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		k;
	int		start;
	int		nb_words;
	char	**tab;

	nb_words = count_words(s, c);
	if (nb_words == -1 || !(tab = (char**)malloc(sizeof(char*) * nb_words + 1)))
		return (NULL);
	tab[nb_words] = NULL;
	i = 0;
	k = 0;
	start = 0;
	while (k < nb_words)
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		if (s[start] != '\0')
			tab[k] = ft_strsub(s, start, i - start);
		k++;
	}
	return (tab);
}
