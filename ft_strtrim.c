/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:44:58 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:12:00 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*trim_copy(char const *s1, size_t start, size_t end)
{
	char	*dst;
	size_t	i;

	dst = malloc(end - start + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (start < end)
		dst[i++] = s1[start++];
	dst[i] = '\0';
	return (dst);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		tab[256];
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (i < 256)
		tab[i++] = 0;
	i = 0;
	while (set[i])
		tab[(unsigned char)set[i++]] = 1;
	start = 0;
	while (s1[start] && tab[(unsigned char)s1[start]])
		start++;
	end = ft_strlen(s1);
	while (end > start && tab[(unsigned char)s1[end - 1]])
		end--;
	if (start >= end)
		return (ft_strdup(""));
	return (trim_copy(s1, start, end));
}

/* int	main(void)
{
	char s1[] = "jtybonjourjo";
	char set[] = "jyuo";

	printf("%s", ft_strtrim(s1, set));
} */