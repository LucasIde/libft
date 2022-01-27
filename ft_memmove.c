/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:06:01 by lide              #+#    #+#             */
/*   Updated: 2022/01/27 16:23:37 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	if (!dst && !src)
		return (0);
	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = -1;
	if (dst >= src)
	{
		while (++i < len)
			a[len - i - 1] = b[len - i - 1];
	}
	else
	{
		while (++i < len)
			a[i] = b[i];
	}
	return (dst);
}
