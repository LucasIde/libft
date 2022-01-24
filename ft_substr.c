/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 13:02:02 by lide              #+#    #+#             */
/*   Updated: 2022/01/24 17:34:20 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	size_t	i;
	size_t	len2;

	if (!s)
		return (NULL);
	len2 = ft_strlen(s);
	if (start >= len2)
		start = len2;
	if (len2 - start < len)
		len = len2 - start;
	s2 = (char *)malloc(sizeof(char) * (len + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (s[start] && i < len)
	{
		s2[i] = s[start];
		start++;
		i++;
	}
	s2[i] = 0;
	return (s2);
}
