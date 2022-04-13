/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:50:10 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:52:47 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void free_ring(char **ring, int n)
{
	int x;
	int i;

	i = 0;
	x = n + 2;
	while (i < n)
	{
		free(ring[i]);
		i++;
	}
	free(ring);
}

void free_board(char ***board, int n, char **ring)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			free(board[i][j]);
			j++;
		}
		free(board[i]);
		i++;
	}
	free(board);
	free_ring(ring, n);
}
