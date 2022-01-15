/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 18:37:45 by lide              #+#    #+#             */
/*   Updated: 2022/01/15 17:02:56 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	c2;

	c2 = (char)c;
	while (*s)
	{
		if (*s == c2)
			return ((char *)s);
		s++;
	}
	if (!c2)
		return ((char *)s);
	return (NULL);
}
/*
int main(void)
{
	char s[] = "tripouille";

	printf("%s\n", ft_strchr(s, 't' + 256));
	printf("%s\n", strchr(s, 't' + 256));
	return (0);
}*/
