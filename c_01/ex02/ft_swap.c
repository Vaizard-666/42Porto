/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:00:08 by vrafael-          #+#    #+#             */
/*   Updated: 2025/02/27 17:22:25 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
/*
int	main(void)
{
	int	x;

	int	y;

	x = 5;
	y = 10;

	printf("Before: x = %d, y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("After: x = %d, y = %d\n", x, y);
	return (0);
}*/