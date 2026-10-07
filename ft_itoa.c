/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 15:05:53 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/18 15:45:49 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	numlen(long n)
{
	size_t	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*res;
	long	nb;
	size_t	len;

	nb = n;
	len = numlen(nb);
	res = malloc(len + 1);
	if (!res)
		return (NULL);
	res[len--] = '\0';
	if (nb < 0)
		nb = -nb;
	if (nb == 0)
		res[0] = '0';
	while (nb > 0)
	{
		res[len--] = (nb % 10) + '0';
		nb /= 10;
	}
	if (n < 0)
		res[0] = '-';
	return (res);
}
