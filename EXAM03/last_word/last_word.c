/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 10:16:33 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/10 12:07:56 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while(*str)
	{
		str++;
		i++;
	}
	return (i);
}

int	main(int argc, char **argv)
{
	int		len;

	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	len = ft_strlen(argv[1]);
	write(1, &argv[1][len - 1], 1);
	return (0);
}
