/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lide <lide@student.s19.be>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 15:34:56 by lide              #+#    #+#             */
/*   Updated: 2022/01/12 15:04:39 by lide             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	atoi2(const char *str, int i, int x)
{
	long	j;
	long	tmp;

	j = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		tmp = j;
		j *= 10;
		j += str[i] - '0';
		if (tmp > j)
		{
			if (x == -1)
				return (0);
			if (x == 1)
				return (-1);
		}
		i++;
	}
	return (j * x);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		x;

	i = 0;
	x = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			x = -1;
		i++;
	}
	return (atoi2(str, i, x));
}
/*
int main(void)
{
	printf("%d\n", atoi("59595959595"));
	printf("%d\n", ft_atoi("59595959595"));
	return (0);
}*/
