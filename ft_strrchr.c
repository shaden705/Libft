/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 16:33:08 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/22 15:15:46 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len + 1 > 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		if (len == 0)
			break ;
		len --;
	}
	return (NULL);
}
