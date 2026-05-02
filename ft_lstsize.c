/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 17:49:26 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 20:47:03 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
/* int	main(void)
{
	int a = 42; // variables
	int b = 56;
	int c = 67;

	t_list *na = ft_lstnew(&a);
	t_list *nb = ft_lstnew(&b);
	t_list *nc = ft_lstnew(&c);
    t_list *lst = ft_lstnew(&c); // initialisation des LISTES

	ft_lstadd_front(&lst, na);
	ft_lstadd_front(&lst, nb);
	ft_lstadd_front(&lst, nc);
    printf("%d",  ft_lstsize(nb));
} */