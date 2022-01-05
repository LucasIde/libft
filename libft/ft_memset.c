/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 11:58:58 by lide              #+#    #+#             */
/*   Updated: 2022/01/04 19:15:06 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void *ft_memset(void * pointer, int value, size_t count)
{
	size_t i;
	unsigned char *ptr;

	ptr = (unsigned char *)pointer;
	i = 0;
	while (i < count)
	{
		ptr[i] = (unsigned char)value;
		i++;
	}
	return (pointer = ptr);
}
/*
int main(void)
{
    int array [] = {54, 85, 20, 63, 21, 78, 59};
    size_t size = sizeof( int ) * 8;
    int length;

    //Display the initial values
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    // Reset the memory bloc
    ft_memset( array, 0, size );

    // Display the new values
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    return 0;
}
*/
