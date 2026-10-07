/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sshakhat <sshakhat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/18 16:33:36 by sshakhat          #+#    #+#             */
/*   Updated: 2025/12/22 15:44:12 by sshakhat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, fd);
	ft_putchar_fd((nb % 10) + '0', fd);
}
