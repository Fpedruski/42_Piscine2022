/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:47:59 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:49:52 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void print_board(char ***board, int n)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			ft_putchar(board[i][j][0]);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		i++;
	}
}
