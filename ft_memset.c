/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:58:58 by lide              #+#    #+#             */
/*   Updated: 2022/01/24 17:31:50 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *pointer, int value, size_t count)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (pointer = ptr);
}
