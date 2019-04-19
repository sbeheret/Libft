/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/11 16:37:05 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 15:42:44 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int	start;
	int	end;

	start = 0;
	end = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (start < end && (s[start] == ' ' || s[start] == '\n' || s[start] == '\t'))
		start++;
	if (start == end)
		return (NULL);
	end--;
	while (end > 0 && (s[end] == ' ' || s[end] == '\n' || s[end] == '\t'))
		end--;
	return (ft_strsub(s, start, end - start + 1));
}
