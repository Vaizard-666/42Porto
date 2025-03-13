/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 17:13:39 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/03 08:51:47 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int	main(void)
{
	char	src[6];
	char	dest[6];
	
	src[0] = 'H';
	src[1] = 'i';
	src[2] = '!';
	src[3] = '\0';
	src[4] = ' ';
	src[5] = ' ';

	ft_strncpy(dest, src, 6);
	printf("after %i %i %i %i %i %i\n", dest[0], dest[1], dest[2], dest[3]);
	return (0);
}
*/
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
