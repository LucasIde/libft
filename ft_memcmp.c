/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:47:57 by lide              #+#    #+#             */
/*   Updated: 2022/01/13 16:03:48 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	*x;

	if (n == 0)
		return (0);
	j = (unsigned char *)s1;
	x = (unsigned char *)s2;
	i = 0;
	while (j[i] == x[i] && i < n - 1)
		i++;
	return (j[i] - x[i]);
}
