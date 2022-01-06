/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/06 12:43:40 by lide              #+#    #+#             */
/*   Updated: 2022/01/06 15:25:22 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	j = 0;
	while (src[j])
		j++;
	if (dstsize == 0)
		return (j);
	i = -1;
	while (src[++i] && i < dstsize - 1)
		dst[i] = src[i];
	dst[i] = '\0';
	return (j);
}
/*
int main(void)
{
	char dest[3];
	const char *s = NULL;
	size_t a = 5;
	size_t b;

	//b = strlcpy(dest, s, a);
	b = ft_strlcpy(dest, s, a);
	printf("%zu\n", b);
	printf("%s\n",s);
	printf("%s\n",dest);
	return (0);
}*/
