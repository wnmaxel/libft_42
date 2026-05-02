/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 20:14:34 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 20:46:48 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = *lst;
	while (last->next != NULL)
		last = last->next;
	last->next = new;
}

/* int	main(void)
{
	int a = 42; // variables
	int b = 56;
	int c = 67;

	t_list *lst = NULL; // initialisation des LISTES
	t_list *na = ft_lstnew(&a);
	t_list *nb = ft_lstnew(&b);
	t_list *nc = ft_lstnew(&c);

	ft_lstadd_back(&lst, na);
	ft_lstadd_back(&lst, nb);
	ft_lstadd_back(&lst, nc);

	while (lst)
	{
		printf("%d\n", *(int *)lst->content);
		lst = lst->next;
	}
} */