/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 15:35:13 by lide              #+#    #+#             */
/*   Updated: 2022/01/06 18:48:06 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	if (dstsize > i)
	{
		while (src[j] && j < dstsize - i - 1)
		{
			dst[i + j] = src[j];
			j++;
		}
	}
	dst[i + j] = 0;
	j = 0;
	while (src[j])
		j++;
	if (dstsize < i)
		return (dstsize + j);
	return (i + j);
}
/*
int main(void)
{
	char dest[100] = "salut\0toi tu va bien ?";
	char dest2[100] = "salut\0toi tu va bien ?";
	const char s[] = " ca va";
	size_t a = 3;
	size_t b;

	b = strlcat(dest, s, a);
	printf("%zu\n", b);
	printf("%s\n",s);
	printf("%s\n",dest);
	printf("-------------------------\n");
	b = ft_strlcat(dest2, s, a);
	printf("%zu\n", b);
	printf("%s\n",s);
	printf("%s\n",dest2);
	return (0);
}*/