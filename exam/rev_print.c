/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariverg <mariverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 13:36:38 by mariverg          #+#    #+#             */
/*   Updated: 2024/04/10 13:39:58 by mariverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        int i;

        i = 0;
        while (argv[1][i])
            i++;
        while (i --)
            write (1, &argv[1][i], 1);
    }
    write (1, "\n", 1);
}