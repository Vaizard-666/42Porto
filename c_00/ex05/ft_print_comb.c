/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:00:55 by vrafael-          #+#    #+#             */
/*   Updated: 2025/02/24 10:22:40 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	while (a <= 7)
	{
		write(1, &a, 1);
		a++;
		{
			b = 1;
			while (b <= 8)
			{
				write(1, &b, 1);
				b++;
			{
				c = 2;
				while (c <= 9)
				{
					write(1, &c, 1);
					c++;
				}
					{
						write(, ", ", 1);
					}
			}
			}
		}
	}
}
int main(void)
{
	ft_print_comb();
	return (0);
}
