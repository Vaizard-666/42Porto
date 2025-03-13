/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 09:35:56 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/08 09:47:28 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc != 2)
		write(1, "a\n", 2);
	else
	{
		int	i;

		i = 0;
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
			{
				write(1, "a\n", 2);
				return (0);
			}
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
