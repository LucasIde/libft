/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/10 14:24:57 by lide              #+#    #+#             */
/*   Updated: 2022/01/24 17:34:59 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	fin(char const *s1, char const *set, int len, int c1)
{
	int	j;
	int verif;

	while (len > c1)
	{
		j = 0;
		verif = 0;
		while (set[j])
		{
			if (set[j] == s1[len])
				verif = 1;
			j++;
		}
		if (verif == 0)
			return (len);
		len--;
	}
	return (len);
}

static int	debut(char const *s1, char const *set)
{
	int	j;
	int	i;
	int verif;

	i = 0;
	while (s1[i])
	{
		j = 0;
		verif = 0;
		while (set[j])
		{
			if (set[j] == s1[i])
				verif = 1;
			j++;
		}
		if (verif == 0)
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

	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	c1 = debut(s1, set);
	c2 = 1 + fin(s1, set, len - 1, c1);
	s2 = (char *)malloc(sizeof(char) * (1 + c2 - c1));
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
