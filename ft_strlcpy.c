/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 23:09:39 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:10:07 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	length;

	length = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (length);
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (length);
}

/* int	main(void)
{
	char dest[16];
	char src[] = "ouinnnn";
	printf("%ld\n", ft_strlcpy(dest, src, 3));
	printf("%s\n", dest);
} */