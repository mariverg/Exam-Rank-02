/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariverg <mariverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:48:41 by mariverg          #+#    #+#             */
/*   Updated: 2024/04/10 11:33:16 by mariverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    int i;
    int j;

    if (argc == 2)
    {
        i = 0;
        while(argv[1][i])
        {
            if(argv[1][i] >= 65 && argv[1][i] <= 90)
            {
                j = 0;
                while (j < argv[1][i] - 64)
                {
                    write (1, &argv[1][i], 1);
                    j++;
                }
            }
         else if (argv[1][i] >= 97 && argv[1][i] <= 122)
        {
           j = 0;
           while (j < argv[1][i] - 96)
           {
                write(1, &argv[1][i], 1);
                j++;
           } 
        }
        else 
            write (1, &argv[1][i], 1);
        i++;
        }
        write (1, "\n",1);
    }
    
}
