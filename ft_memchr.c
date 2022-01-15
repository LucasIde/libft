/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 19:26:12 by lide              #+#    #+#             */
/*   Updated: 2022/01/15 17:52:40 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*j;
	unsigned char	c2;

	if (!n)
		return (NULL);
	c2 = (unsigned char)c;
	j = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		while (!(j[i]) && i < n - 1 && c2 != 0)
			i++;
		while (j[i] && i < n)
		{
			if (j[i] == c2)
				return ((void *)s + i);
			i++;
		}
		if (!c2 && !j[i])
			return ((void *)s + i);
	}
	return (NULL);
}
/*
int main(void)
{
	char s[] = ":(){ :|: & };:";
	char *s2;
	char *s3;

	//s2 = (char *)ft_memchr(s, '\xde', 15);
	s3 = (char *)memchr(s, '\xde', 15);
	//printf("%s\n", s2);
	printf("%s", s3);
	return (0);
}*/
