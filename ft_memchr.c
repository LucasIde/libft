/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:26:12 by lide              #+#    #+#             */
/*   Updated: 2022/01/24 20:53:34 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	c2;

	c2 = (unsigned char)c;
	j = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		while (!(j[i]) && i < n - 1 && c2 != 0)
			i++;
		if (j[i])
		{
			if (j[i] == c2)
				return ((void *)s + i);
		}
		if (!c2 && !j[i])
			return ((void *)s + i);
		i++;
	}
	return (NULL);
}
