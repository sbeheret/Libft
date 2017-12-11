/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:18:21 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/15 17:25:38 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*ptr2;

	ptr = lst;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		(*f)(ptr);
		ptr = ptr2;
	}
}
