/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 19:04:03 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:11:42 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_copy_substr(char *dst, const char *s, size_t start, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		dst[i] = s[start + i];
		i++;
	}
	dst[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	dst = malloc(len + 1);
	if (!dst)
		return (NULL);
	ft_copy_substr(dst, s, start, len);
	return (dst);
}

/* int	main(void)
{
	char	s[] = "bonjour";

	printf("%s", ft_substr(s, 0, 6));
} */
