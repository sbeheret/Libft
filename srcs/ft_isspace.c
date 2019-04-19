/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <sbeheret@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/17 10:31:32 by sbeheret          #+#    #+#             */
/*   Updated: 2019/04/19 11:49:09 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isspace(int c)
{
	switch (c) {
		case '\v':
		case '\t':
		case '\r':
		case '\f':
		case ' ':
		case '\n':
			return (1);
			break ;
		default:
			return (0);
	}
}
