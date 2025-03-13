/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:32:21 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/08 16:45:51 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	v;

	v = 1;
	while (v < argc)
	{
		i = 0;
		while (argv[v][i])
		{
			write(1, &argv[v][i], 1);
			i++;
		}
		write(1, "\n", 1);
		v++;
	}
	return (0);
}
