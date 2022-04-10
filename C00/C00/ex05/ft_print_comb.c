/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 18:21:36 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/07 21:06:46 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putbase(int c, int d, int u)
{
	write(1, &c, 1);
	write(1, &d, 1);
	write(1, &u, 1);
	if (!(c == '7' && d == '8' && u == '9' ))
		write(1, ", ", 2);
}

int	main(void)
{
	int	c;
	int	d;
	int	u;

	c = '0';
	while (c <= '7')
	{
		d = c +1;
		while (d <= '8')
		{
			u = d +1;
			while (u <= '9')
			{
				ft_putbase(c, d, u);
			u++;
			}
		d++;
		}
	c++;
	}
	write (1, "\n", 1);
}
