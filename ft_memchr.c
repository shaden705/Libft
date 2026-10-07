/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 13:19:00 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/21 14:53:37 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t count)
{
	unsigned char	*p;

	p = (unsigned char *)s;
	while (count--)
	{
		if (*p == (unsigned char)c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
