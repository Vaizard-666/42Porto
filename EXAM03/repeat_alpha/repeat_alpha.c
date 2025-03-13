/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrafael- <vrafael-@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 08:03:43 by vrafael-          #+#    #+#             */
/*   Updated: 2025/03/13 08:47:28 by vrafael-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void repeat_alpha(char *str)
{
    int i = 0;
    int index;
    while (str[i] != '\0') 
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
            {
            if (str[i] >= 'a' && str[i] <= 'z')
                index = str[i] - 'a' + 1;
            else
                index = str[i] - 'A' + 1;
            int j = 0;
            while (j < index) 
            {
                write(1, &str[i], 1);
                j++;
            }
        } 
        else 
            write(1, &str[i], 1);
        i++;
    }
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
        repeat_alpha(argv[1]);
    else
        write(1, "\n", 1);
    return (0);
}