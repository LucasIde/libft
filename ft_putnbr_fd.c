/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 18:00:19 by lide              #+#    #+#             */
/*   Updated: 2022/01/27 12:57:49 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	rev_n;
	long	tmp;
	char	nb;

	tmp = n;
	rev_n = 0;
	if (tmp < 0)
	{
		write(fd, "-", 1);
		tmp *= -1;
	}
	while (tmp > 0)
	{
		rev_n *= 10;
		rev_n += tmp % 10;
		tmp /= 10;
	}
	while (rev_n > 0)
	{
		nb = (rev_n % 10) + '0';
		rev_n /= 10;
		write(fd, &nb, 1);
	}
	if ((long)n % 10 == 0)
		write (fd, "0", 1);
}
