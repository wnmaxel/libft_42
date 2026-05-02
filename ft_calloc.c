/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 18:20:32 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:11:02 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*dst;

	if (n != 0 && size > SIZE_MAX / n)
		return (NULL);
	dst = malloc(n * size);
	if (!dst)
		return (NULL);
	ft_bzero(dst, n * size);
	return (dst);
}

/* int	main(void)
{
	printf("%p", ft_calloc(5, 1));
} */