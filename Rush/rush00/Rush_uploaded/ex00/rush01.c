/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amurcia- <amurcia-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 13:45:42 by amurcia-          #+#    #+#             */
/*   Updated: 2022/04/03 19:25:19 by amurcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ifrush(a, b, x, y)
{
	if (((a == 1) && (b == 1)) || ((a == x) && (b == y)))
	{
		ft_putchar('/');
	}
	else if ((a == 1) && (b == y))
	{
		ft_putchar('\\');
	}
	else if ((a == x) && (b == 1))
	{
		ft_putchar('\\');
	}
	else if (((a > 1) && (a < x)) && ((b > 1) && (b < y)))
	{
		ft_putchar(' ');
	}
	else
	{
		ft_putchar('*');
	}
}

int	rush(int x, int y)
{
	int	a;
	int	b;

	if ((x <= 0) || (y <= 0))
	{
		write (1, "No existe", 9);
		return (0);
	}
	else
	{
		b = 1;
		while (b <= y)
		{
			a = 1;
			while (a <= x)
			{	
				ifrush(a, b, x, y);
				a++;
			}
			ft_putchar('\n');
			b++;
		}
		return (0);
	}
}
