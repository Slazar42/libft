/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slazar <slazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 02:00:15 by slazar            #+#    #+#             */
/*   Updated: 2022/10/29 07:24:55 by slazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*temp;
	void	*contentcpy;

	head = NULL;
	while (lst)
	{
		contentcpy = f(lst->content);
		temp = ft_lstnew(contentcpy);
		if (!temp)
			del(contentcpy);
		ft_lstadd_back(&head, temp);
		lst = lst->next;
	}
	return (head);
}

// newlist = ft_lstmap(mylist, ft_strdup, free);
// dna Polymerase
