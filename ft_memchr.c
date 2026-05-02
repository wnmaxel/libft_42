/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 21:03:42 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:10:47 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*dst;

	dst = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (dst[i] == (unsigned char)c)
			return ((dst + i));
		i++;
	}
	return (NULL);
}

/* int main (void)
{
	const char s[] = "bonjour";
	printf("%p", ft_memchr(s, 111, 5));
} */