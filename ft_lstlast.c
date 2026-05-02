/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:09:52 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:15:43 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
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

	ft_lstadd_front(&lst, na);
	ft_lstadd_front(&lst, nb);
	ft_lstadd_front(&lst, nc);
	t_list *last = ft_lstlast(lst);
	printf("%d", *(int *)last->content);
} */