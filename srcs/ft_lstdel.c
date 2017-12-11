/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:00:58 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/16 18:29:22 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = (*alst);
	while (tmp != NULL)
	{
		tmp2 = tmp->next;
		(*del)(tmp->content, tmp->content_size);
		free(tmp);
		tmp = tmp2;
	}
	(*alst) = NULL;
}
