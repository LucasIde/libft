/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 09:42:19 by lide              #+#    #+#             */
/*   Updated: 2022/01/15 15:38:18 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	words(char const *s, char c)
{
	int	i;
	int	nb;
	int	tmp;

	tmp = 1;
	nb = 0;
	i = 0;
	while (s[i])
	{
		if (tmp == 1 && s[i] != c)
		{
			nb++;
			tmp = 0;
		}
		if (s[i] == c)
			tmp = 1;
		i++;
	}
	return (nb);
}

int	letter(char const *s, char c, int i)
{
	int	nb;

	nb = 0;
	while (s[i] && s[i] != c)
	{
		nb++;
		i++;
	}
	return (nb);
}

char	**freee(char **s1)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		free(s1[i]);
		i++;
	}
	free(s1);
	return (NULL);
}

char	**ft_split2(char const *s, char c, char **s1)
{
	int	j;
	int	j2;
	int	i;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j2 = 0;
		if (s[i])
		{
			s1[j] = malloc(sizeof(char) * (letter(s, c, i) + 1));
			if (!s1)
				return (freee(s1));
			while (s[i] && s[i] != c)
				s1[j][j2++] = s[i++];
			s1[j][j2] = 0;
			j++;
		}
	}
	s1[j] = NULL;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	int		sep;
	char	**s1;

	if (!s)
		return (NULL);
	sep = words(s, c);
	if ((!s[0] && !c) || sep == 0)
	{
		s1 = malloc(sizeof(char *));
		if (!s1)
			return (NULL);
		s1[0] = NULL;
		return (s1);
	}
	s1 = malloc(sizeof(char *) * (sep + 1));
	if (!s1)
		return (NULL);
	return (ft_split2(s, c, s1));
}
/*
int main(void)
{
	char *s = "\0";
	char **save;
	int i;

	i = 0;
	save = ft_split(s, '\0');
	while (save[i])
	{
		printf("%s\n", save[i]);
		i++;
	}
	return (0);
}*/
