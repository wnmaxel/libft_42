/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:44:54 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:16:21 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/* int main(void)
{
	int a = 42; // variables
	int b = 56;
	int c = 67;

	t_list *lst = NULL; // initialisation des LISTES
	t_list *na = ft_lstnew(&a);
	t_list *nb = ft_lstnew(&b);
	t_list *nc = ft_lstnew(&c);

	ft_lstadd_front(&lst, na);
	ft_lstadd_front(&lst, nb);
	ft_lstadd_front(&lst, nc);

	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
} */