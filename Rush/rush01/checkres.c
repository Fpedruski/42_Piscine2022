/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boardfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:42:50 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:49:38 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int check_res_up(char ***board, char **ring, int xy[])
{
	char pista;
	int i;
	int cont;

	cont = 1;
	while (ring[xy[0]][xy[1]] != ring[0][5])
	{
		pista = ring[xy[0]][xy[1]];		
		i = 1;
		while(i < 4)
		{
			if (board[xy[0]][(xy[1] - 1)][0] < board[i][(xy[1] - 1)][0])
				cont++;
			i++;
		}
		xy[1] = xy[1] + 1;
	}
	if (pista == (cont - '0'))
		return (1);
	else
		return (0);
}

int check_res_right(char ***board, char **ring, int xy[])
{
	char pista;
	int i;
	int cont;

	cont = 1;
	while (ring[xy[0]][xy[1]] != ring[5][5])
	{
		pista = ring[xy[0]][xy[1]];		
		i = 2;
		while(i >= 0)
		{
			if (board[(xy[0] - 1)][(xy[1] - 2)][0] < board[xy[0] - 1][i][0])
				cont++;
			i--;
		}
		xy[0] = xy[0] + 1;
	}
	if (pista == (cont - '0'))
		return (1);
	else
		return (0);
}

int check_res_down(char ***board, char **ring, int xy[])
{
	char pista;
	int i;
	int cont;

	cont = 1;
	while (ring[xy[0]][xy[1]] != ring[5][5])
	{
		pista = ring[xy[0]][xy[1]];
		i = 2;
		while(i >= 0)
		{
			if (board[3][(xy[1] - 1)][0] < board[i][(xy[1] - 1)][0])
				cont++;
			i--;
		}
		xy[1] = xy[1] + 1;
	}
	if (pista == (cont - '0'))
		return (1);
	else
		return (0);
}

int check_res_left(char ***board, char **ring, int xy[])
{
	char pista;
	int i;
	int cont;

	cont = 1;
	while (ring[xy[0]][xy[1]] != ring[5][0])
	{
		pista = ring[xy[0]][xy[1]];		
		i = 1;
		while(i < 4)
		{
			if (board[(xy[0] - 1)][(xy[1])][0] < board[xy[0] - 1][i][0])
				cont++;
			i++;
		}
		xy[0] = xy[0] + 1;
	}
	if (pista == (cont - '0'))
		return (1);
	else
		return (0);
}

int check_res(char ***board, char **ring, int n)
{
	int correcto;
	int xy[2];

	xy[0] = 0;
	xy[1] = 1;
	correcto = check_res_up(board, ring, xy);
	if (correcto == 1)
	{
		xy[0] = 1;
		xy[1] = n + 2 - 1;
		correcto = check_res_right(board, ring, xy);
		if (correcto == 1)
		{
			xy[0] = n + 2 - 1;
			xy[1] = 1;
			correcto = check_res_down(board, ring, xy);
			if (correcto == 1)
			{
				xy[0] = 1;
				xy[1] = 0;
				correcto = check_res_left(board, ring, xy);
			}
		}
	}
	return(correcto);
}

