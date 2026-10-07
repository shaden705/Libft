/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 17:26:12 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/21 14:41:50 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;

	i = 0;
	new = (char *) malloc (sizeof(char) * ft_strlen(s) + 1);
	if (!new)
		return (NULL);
	while (*s)
		new[i++] = *s++;
	new[i] = '\0';
	return (new);
}
