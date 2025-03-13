/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 09:19:55 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/05 09:30:36 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>

char	*ft_strcat(char *dest, char *src);

int	main(void)
{
	char	dest[] = "aloha, ";
	char	src[] = "bruh!";

	ft_strcat(dest, src);
	printf("%s\n", dest);
	return (0);
}
*/
char	*ft_strcat(char	*dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
