/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_l.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 09:54:29 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/01 10:58:59 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    // Check if there are no arguments or if there are multiple arguments
    if (argc < 2)
    {
        write(1, "l\n", 2);
        return (0);
    }

    // Initialize the counter for arguments
    i = 1;
    while (i < argc)
    {
        // Initialize the counter for characters in the current argument
        j = 0;
        while (argv[i][j] != '\0') // Check each character in the argument
        {
            if (argv[i][j] == 'l') // If 'l' is found
            {
                write(1, "l\n", 2);
                return (0);
            }
            j++;
        }
        i++;
    }

    // If no 'l' was found in any argument, print 'l\n'
    write(1, "l\n", 2);
    return (0);
}