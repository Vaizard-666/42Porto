/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   interval_spacing.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/10 08:48:23 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/10 10:11:37 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

int	main(int argc, char *argv[])
{
	char	*str;
	int		i;
	int		first;

	str = argv[1];
	i = 0;
	first = 1;
	if (argc != 2)
	{
		write(1, "\n", 1);
		return (0);
	}
	while (str[i] != '\0')
	{
		if (ft_str_is_alpha(&str[i]))
		{
			if (!first)
				write(1, "   ", 3);
			write(1, &str[i], 1);
			first = 0;
		}
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
