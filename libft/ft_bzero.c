/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 14:33:46 by lide              #+#    #+#             */
/*   Updated: 2022/01/04 19:15:11 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	ft_bzero(void *s, size_t n)
{
	size_t i;
	unsigned char *tmp;

	tmp = (unsigned char *)s;
	i = 0;
	while(i < n)
	{
		tmp[i] = 0;
		i++;
	}
	s = tmp;
}
/*
int main(void)
{
    int array [] = {54, 85, 20, 63, 21};
    size_t size = sizeof( int ) * 4;
    int length;

    //Display the initial values
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    // Reset the memory bloc
    ft_bzero(array, size);

    // Display the new values
    for( length=0; length<5; length++) {
        printf( "%d ", array[ length ] );
    }
    printf( "\n" );

    return 0;
}*/
