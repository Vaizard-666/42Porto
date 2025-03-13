/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 16:23:24 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/02 16:43:47 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_str_is_printable(char *str);

int	main(void)
{
	int	result;

	result = ft_str_is_printable("blabla616484\x7F");
	printf("%d\n", result);
	return (0);
}
*/
int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= ' ' && *str <= '~'))
		{
			return (0);
		}
		str++;
	}
	return (1);
}
