/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot13.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 11:39:22 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/08 09:09:56 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rot13(char *str)
{
	int	c;

	while (*str != '\0')
	{
		c = *str;
		if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
			c += 13;
		else if ((c >= 'n' && c <= 'z') || (c >= 'N' && c <= 'Z'))
			c -= 13;
		write(1, &c, 1);
		str++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		ft_rot13(argv[1]);
	else
		write(1, "\n", 1);
	return (0);
}
