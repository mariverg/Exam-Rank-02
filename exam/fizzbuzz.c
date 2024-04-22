/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mariverg <mariverg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 12:22:10 by mariverg          #+#    #+#             */
/*   Updated: 2024/03/11 12:41:19 by mariverg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int i)
{
	if (i > 9)
		ft_putnbr (i / 10);
	write(1, &"0123456789"[i % 10], 1);
}

int main (void)
{
	int i;

	i = 0;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if (i % 3 == 0)
			write (1, "fizz", 4);
		else if (i % 5 == 0)
			write (1, "buzz", 4);
		else 
			ft_putnbr(i);
		i++;
		write (1, "\n", 1);
	}
}