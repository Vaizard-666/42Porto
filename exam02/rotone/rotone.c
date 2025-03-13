/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 13:47:50 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/13 14:32:12 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;

    i = 0;
    if (argc != 2)
    {
        write(1, "\n", 1);
        return (0);
    }
    while (argv[1][i])
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'y')
            argv[1][i] += 1;
        else if (argv[1][i] == 'z')
            argv[1][i] = 'a';
        else if (argv[1][i] >= 'A' && argv[1][i] <= 'Y')
            argv[1][i] += 1;
        else if (argv[1][i] == 'Z')
            argv[1][i] = 'A';
        write(1, &argv[1][i], 1);
        i++;
    }
    write(1, "\n", 1);
}