/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agranjon <agranjon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:36:27 by agranjon          #+#    #+#             */
/*   Updated: 2023/11/13 07:58:25 by agranjon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_putnbr(long long int nb, int fd)
{
	char	n;

	n = '0';
	if (nb == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(fd, "-", 1);
		nb *= -1;
	}
	if (nb >= 0 && nb <= 9)
	{
		n = nb + '0';
		write(fd, &n, 1);
	}
	else
	{
		ft_putnbr(nb / 10, fd);
		ft_putnbr(nb % 10, fd);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd != -1)
	{
		ft_putnbr(n, fd);
	}
}
