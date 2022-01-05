/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 17:06:01 by lide              #+#    #+#             */
/*   Updated: 2022/01/05 18:32:21 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*a;
	const unsigned char	*b;

	if (!dst && !src)
		return (0);
	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	if (dst >= src)
	{
		while (i < len)
		{
			a[len - i - 1] = b[len - i - 1];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			a[i] = b[i];
			i++;
		}
	}
	return (dst);
}

/*int main(void)
{
	size_t len = 6;
	char *tmp;
	char a[] = {"comment"};
	const char b[] = {"bonjour"};

	tmp = ft_memmove(a, b, len);
	printf("%s", tmp);
	return (0);
}*/
