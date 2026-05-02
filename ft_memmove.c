/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/21 16:32:12 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 21:53:13 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d > s)
	{
		i = n;
		while (i--)
			d[i] = s[i];
	}
	else
	{
		i = 0;
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/* int	main(void)
{
	char tuc[] = "abcdefhijklmnop";

	ft_memmove(tuc + 1, tuc, 3);
	printf("%s\n", tuc);
	char tu[] = "abcdefhijklmnop";
	memmove(tu + 1, tu, 3);
	printf("%s", tuc);
	return (0);
} */