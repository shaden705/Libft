/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:27:48 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/22 12:25:39 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char	*csrc;
	unsigned char	*cdest;
	size_t			i;

	if (!dest && !src)
		return (NULL);
	cdest = (unsigned char *)dest;
	csrc = (unsigned char *)src;
	i = 0;
	while (i < count)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}
