/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:58:46 by lide              #+#    #+#             */
/*   Updated: 2022/01/15 17:02:51 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		j;
	char	c2;

	c2 = (char)c;
	i = 0;
	j = -1;
	while (s[i])
	{
		if (s[i] == c2)
			j = i;
		i++;
	}
	if (!c2)
		return ((char *)s + i);
	if (j != -1)
		return ((char *)s + j);
	return (NULL);
}
