/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 09:35:55 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/13 09:49:42 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    rev_print(char * str)
{
    int i;

    i = ft_strlen(str) - 1;
    while (i >= 0)
    {
        write(1, &str[i], 1);
        i--;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        rev_print(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}
