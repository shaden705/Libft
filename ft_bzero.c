/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 15:09:49 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/22 12:47:46 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*c;
	size_t			i;

	i = 0;
	c = (unsigned char *) s;
	while (i < n)
	{
		c[i] = 0;
		i++;
	}
}
