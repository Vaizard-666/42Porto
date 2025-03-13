/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 17:00:24 by vrafael-          #+#    #+#             */
/*   Updated: 2025/02/28 12:49:19 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	a = 10;
	int	b = 2;
	int	div;
	int	mod;

	printf("before a %d, b %d\n", a, b);
	ft_div_mod(a, b, &div, &mod);
	printf("after div %d, mod %d\n", div, mod);
	return (0);
}*/
