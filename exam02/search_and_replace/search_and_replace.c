/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_and_replace.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 10:50:35 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/13 13:16:20 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 4)
    {
        write(1, "\n", 1);
        exit (0);
    }
    if (argv[2][1] != '\0' || argv[3][1] != '\0')
    {
        write(1, "\n", 1);
        exit (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] == argv[2][0])
            argv[1][i] = argv[3][0];
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
    return (0);
}
