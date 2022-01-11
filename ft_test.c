/*
#include "libft.h"

int	compteur(char const *s, char c)
{
	int	i;
	int	nb;

	nb = 0;
	i = 1;
	while (s[i])
	{
		if (s[i] == c && s[i - 1] != c && s[i + 1] != c)
			nb++;
		i++;
	}
	return (nb);
}

int compteur2(char const *s, char c, int i)
{
	int nb;

	nb = 0;
	while (s[i] != c)
		nb++;
	return (nb);
}

char	**ft_split2(char const *s, char c, char **s1, int i)
{
	int j;
	int j2;

	j = 0;
	while (s[i])
	{
		j2 = 0;
		s1[j] = malloc(sizeof(char) * (compteur2(s, c, i) + 1));
		if (!s1[j])
			return (NULL);
		while (s[i] && s[i] != c)
			s1[j][j2++] = s[i++];
		s1[j][j2] = 0;
			j++;
		while (s[i] == c)
			i++;
	}
	j++;
	s1[j] = 0;
	return (s1);
}

char	**ft_split(char const *s, char c)
{
	int	sep;
	int i;
	//int len;
	char **s1;

	if (!s)
		return (NULL);
	sep = compteur(s, c);
	if (sep == 0)
		return (NULL);
	//len = ft_strlen(s);
	len = 0;
	while (s[len])
		len++;
	if (sep == len)
		return (NULL);
	s1 = malloc(sizeof(char *) * (sep + 1));
	if (!s1)
		return (NULL);
	i = 0;
	while (s[i] == c)
		i++;
	return (ft_split2(s, c, s1, i));
}

int main(void)
{
	char *s = "              ";
	char **save;
	int i;

	i = 0;
	save = ft_split(s, ' ');
	while (save[i])
	{
		printf("%s\n", save[i]);
		i++;
	}
	return (0);
}

*/
