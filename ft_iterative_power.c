/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 18:54:05 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/06 18:54:05 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}