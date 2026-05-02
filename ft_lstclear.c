/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 20:37:13 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 20:41:14 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next;

	if (*lst == 0)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		if (del)
			del((*lst)->content);
		free(*lst);
		*lst = next;
	}
	*lst = 0;
}

/* void del(void *ptr)
{
    free(ptr);
}
int	main(void)
{
	int *a = malloc(sizeof(int));
	int *b = malloc(sizeof(int));
	int *c = malloc(sizeof(int));

	*a = 42;
	*b = 56;
	*c = 67;

	t_list *lst = NULL;

	t_list *na = ft_lstnew(a);
	t_list *nb = ft_lstnew(b);
	t_list *nc = ft_lstnew(c);

	ft_lstadd_front(&lst, na);
	ft_lstadd_front(&lst, nb);
	ft_lstadd_front(&lst, nc);

	printf("Avant clear:\n");
	t_list *tmp = lst;
	while (tmp)
	{
		printf("%d\n", *(int *)tmp->content);
		tmp = tmp->next;
	}

	ft_lstclear(&lst, del);

	printf("Après clear:\n");
	if (!lst)
		printf("liste vide\n");
} */