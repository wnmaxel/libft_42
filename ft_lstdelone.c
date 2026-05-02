/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 20:29:19 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 20:36:54 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

/* int	main(void)
{
	int *value = malloc(sizeof(int));
	*value = 42;

	t_list *node = ft_lstnew(value);

	printf("avant del: %d\n", *(int *)node->content);

	ft_lstdelone(node, del);

	// node est maintenant détruit
	return (0);
} */