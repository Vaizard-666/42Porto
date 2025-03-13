/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:49:33 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/06 14:38:30 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
void	ft_putstr(char *str);

int	main(void)
{
	char	str[] = "Aloha!";

	ft_putstr(str);
	return (0);
}
*/
#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		write (1, str, 1);
		str++;
	}
}
