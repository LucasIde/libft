/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:24:57 by lide              #+#    #+#             */
/*   Updated: 2022/01/17 14:26:31 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fin(char const *s1, char const *set, int len, int c1)
{
	int	j;
	int	verif;

	verif = len;
	while (len > c1)
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[len])
				verif--;
			j++;
		}
		if (verif >= len)
			return (len);
		len--;
	}
	return (len);
}

static int	debut(char const *s1, char const *set)
{
	int	j;
	int	i;
	int	verif;

	i = 0;
	verif = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				verif++;
			j++;
		}
		if (verif <= i)
			return (i);
		i++;
	}
	return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		c1;
	int		c2;
	int		len;
	char	*s2;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	len = ft_strlen(s1);
	c1 = debut(s1, set);
	c2 = 1 + fin(s1, set, len - 1, c1);
	s2 = malloc(sizeof(char) * (1 + c2 - c1));
	if (!s2)
		return (0);
	len = 0;
	while (c2 > c1)
	{
		s2[len] = s1[c1];
		len++;
		c1++;
	}
	s2[len] = 0;
	return (s2);
}
/*
int main(void)
{
	printf("%s", ft_strtrim("",""));
	return (0);
}*/
