/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 22:36:47 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:03:52 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*dst;

	if (!s || !f)
		return (NULL);
	dst = malloc(ft_strlen(s) + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dst[i] = f(i, s[i]);
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*char	ft_func(unsigned int n, char c)
{
	return (c + n);
}
int	main(void)
{
	char s[] = "abcde";
	printf("%s", ft_strmapi(s, ft_func));
}  */