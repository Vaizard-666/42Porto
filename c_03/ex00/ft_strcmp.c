/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 08:11:36 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/03 17:46:14 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	int		result;
	char	s1[] = "hello";
	char	s2[] = "helloa";

	result = ft_strcmp(s1, s2);
	printf("%d\n", result);
	return (0);
}
*/
int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
