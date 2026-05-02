/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axweinma <axweinma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:21:40 by axweinma          #+#    #+#             */
/*   Updated: 2026/05/02 23:13:30 by axweinma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int		len;
	long	nb;
	char	*dst;
	int		neg;

	neg = (n < 0);
	nb = n;
	len = ft_intlen(nb);
	dst = malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	if (nb < 0)
		nb = -nb;
	dst[len] = '\0';
	while (len-- > neg)
	{
		dst[len] = (nb % 10) + '0';
		nb /= 10;
	}
	if (neg)
		dst[0] = '-';
	return (dst);
}

/*
int	main(void)
{
	printf("%s", ft_itoa(INT_MIN));
} */