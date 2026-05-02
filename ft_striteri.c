/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 14:52:09 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:14:58 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

void	ft_function(unsigned int n, char *s)
{
	if (n > 0)
		*s = 'x';
}

/* int	main(void)
{
	char s[] = "abcde";
	ft_striteri(s, ft_function);
	printf("%s", s);
} */