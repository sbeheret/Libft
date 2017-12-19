/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbeheret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/15 17:25:45 by sbeheret          #+#    #+#             */
/*   Updated: 2017/11/16 18:52:53 by sbeheret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ptr;
	t_list	*pn;
	t_list	*ptr2;
	t_list	*pn2;

	ptr = lst;
	pn = NULL;
	while (ptr != NULL)
	{
		ptr2 = ptr->next;
		pn2 = (*f)(ptr);
		if (pn2 != NULL)
		{
			if ((pn2 = ft_lstnew(pn2->content, pn2->content_size)) == NULL)
				return (NULL);
			ft_lstadd_end(&pn, pn2);
		}
		ptr = ptr2;
	}
	return (pn);
}
