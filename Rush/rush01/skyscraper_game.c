/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   skyscraper_game.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:40:36 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:52:43 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void check1(char ***board, char **ring, int n);
void boardfill(char ***board, int n, int *ptr_vuelta);
int check_res(char ***board, char **ring, int n);
void print_board(char ***board, int n);
void free_board(char ***board, int n, char **ring);
void check2(char ***board, char **ring, int n);

void espacio(char ***board, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 1;
	while (i < n)
	{
		while (j < n)
		{
			while (k < (n + 1))
			{
				board[i][j][k] = ' ';
				k++;
			}
			k = 1;
			j++;
		}
		j = 0;
		i++;
	}
}

void reset(char ***board, int n)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		while (j < n)
		{
			board[i][j][0] = '0';
			j++;
		}
		j = 0;
		i++;
	}
}

void game(char ***board, char **ring, int n)
{
	int correcto;
	int vuelta;
	int *ptr_vuelta;
	int posibilidades;
	
	posibilidades = 0;
	vuelta = 1;
	ptr_vuelta = &vuelta;
	correcto = 0;
	espacio(board, n);
	while (correcto == 0)
	{	
		reset(board, n);
		check1(board, ring, n);
		if (posibilidades == 0)
		{
			check2(board, ring, n);
			posibilidades = 1;
		}
		boardfill(board, n, ptr_vuelta);
		correcto = check_res(board, ring, n);
	}
	print_board(board, n);
	free_board(board, n, ring);
}
