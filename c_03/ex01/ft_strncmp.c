/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/03 12:37:15 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/04 09:19:13 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(void)
{
	int		result;
	char	s1[] = "hello";
	char	s2[] = "helloa";

	result = ft_strncmp(s1, s2, 6);
	printf("%d\n", result);
	return (0);
}
*/
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (0);
}
