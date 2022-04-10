/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 15:37:53 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/07 21:14:24 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nmbr)
{	
	if (nmbr < 0)
	{
		ft_putchar('-');
		if (nmbr == -2147483648)
		{
			write (1, "2147483648", 10);
		}
		else
		{
			nmbr = -nmbr;
		}
	}
	if (nmbr >= 10)
	{
		ft_putnbr(nmbr / 10);
		ft_putnbr(nmbr % 10);
	}	
	if (nmbr < 10 && nmbr >= 0)
		ft_putchar(nmbr + '0');
}
