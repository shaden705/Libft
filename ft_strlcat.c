/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 12:21:54 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/21 14:12:59 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	i;

	dlen = 0;
	i = 0;
	while (dlen < size && dst[dlen])
		dlen++;
	if (dlen == size)
		return (size + ft_strlen(src));
	while (src[i] && dlen + i + 1 < size)
	{
		dst[i + dlen] = src[i];
		i++;
	}
	dst[i + dlen] = '\0';
	return (dlen + ft_strlen(src));
}
