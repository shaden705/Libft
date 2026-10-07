/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 11:56:08 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/21 15:09:59 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*str;
	size_t			i;

	str = ptr;
	i = 0;
	while (i < len)
	{
		str[i] = (unsigned char) c;
		i++;
	}
	return (ptr);
}
