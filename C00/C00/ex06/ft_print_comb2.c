/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 00:31:37 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/07 20:50:37 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print( int a, int b);

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (b < 100)
	{
	a = b + 1;
		while (a < 100)
		{
			ft_print(a, b);
			a++;
		}
		b++;
	}
	write (1, "\n", 1);
}

void	ft_print(int a, int b)
{
	char	a1;
	char	a2;
	char	b1;
	char	b2;

	a1 = '0' + (a / 10);
	a2 = '0' + (a % 10);
	b1 = '0' + (b / 10);
	b2 = '0' + (b % 10);
	write (1, &b1, 1);
	write (1, &b2, 1);
	write (1, " ", 1);
	write (1, &a1, 1);
	write (1, &a2, 1);
	if (b < 98 && a <= 99)
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
}
