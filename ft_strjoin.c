/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:56:43 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 20:47:55 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*dst;

	if (!s1 || !s2)
		return (NULL);
	dst = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		dst[i + j] = s2[j];
		j++;
	}
	dst[i + j] = '\0';
	return (dst);
}

/* int	main(void)
{
	char s1[] = "bonjour";
	char s2[] = "toi";
	printf("%s", ft_strjoin(s1, s2));
} */