/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 15:01:56 by lide              #+#    #+#             */
/*   Updated: 2022/01/05 18:47:33 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t i;
	unsigned char *a;
	const unsigned char *b;

	if (!dst && !src)
		return (0);
	a = (unsigned char *)dst;
	b = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
    int array [] = { 'A', 'B', 'C', 'D', 'E'};
    int * copy = NULL;
    int length = sizeof( int ) * 5;

    // Memory allocation and copy
    copy = (int *) malloc( length );
    memcpy( copy, array, length );

    // Display the copied values
    for( length=0; length<5; length++ ) {
        printf( "%d ", copy[ length ] );
    }
    printf( "\n" );

    free( copy );

    return EXIT_SUCCESS;
}*/
