/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:26:12 by lide              #+#    #+#             */
/*   Updated: 2022/01/06 19:46:32 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char *j;

	j = (char *)s;
	i = 0;
	while (j[i] && i < n)
	{
		if (j[i] == c)
			return ((void *)s + i);
		i++;
	}
	if (!c && !j[i])
		return ((void *)s + i);
	return (NULL);
}
