/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 12:54:29 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/02 10:02:31 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	int	c;

	c = ft_strlen("This is Madness!!");
	printf("%d", c);
	return (0);
}

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}
