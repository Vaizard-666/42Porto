/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:35:59 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/07 07:50:45 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int	main(void)
{
	char	str[] = "sumodelanlaranjade";
	char	to_find[] = "laranja";
	char	*result;

	result = ft_strstr(str, to_find);
	printf("%s\n", result);
	return (0);
}
*/
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = (0);
	if (*to_find == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = (0);
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
