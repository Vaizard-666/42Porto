/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:00:42 by vrafael-          #+#    #+#             */
/*   Updated: 2025/02/27 09:31:37 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 20;
	y = 5;
	printf("before x %d, y %d\n", x, y);
	ft_ultimate_div_mod(&x, &y);
	printf("after x %d, y %d\n", x, y);
	return (0);
}*/
