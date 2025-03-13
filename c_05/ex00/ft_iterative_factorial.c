/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 14:21:51 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/09 12:24:47 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	product;

	i = 1;
	product = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		product *= i;
		i++;
	}
	return (product);
}
/*
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main(void)
{
	int	result;

	result = ft_iterative_factorial(0);
	printf("nb! %d\n", result);
	return (0);
}*/
