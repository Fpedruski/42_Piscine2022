/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 09:08:14 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:43:55 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void V2_put1_4(char ***board, char **ring, int n)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i < (n + 2 - 1))
	{
		if (ring[i][(n + 2 - 1)] == '4')
		{
			j = 1;
			k = 3;
			while (j <= 4)
			{
				board[(i - 1)][(k)][0] = j + '0';
				j++;
				k--;
			}
		}
		else if (ring [i][(n + 2 - 1)] == '1')
		{
			board[(i - 1)][3][0] = '4';
		}
	}
}

void V1_put1_4(char ***board, char **ring, int n)
{
	int i;
	int j;

	i = 1;
	while (i < (n + 2 - 1))
	{
		if (ring[i][0] == '4')
		{
			j = 1;
			while (j <= 4)
			{
				board[(i - 1)][(j - 1)][0] = j + '0';
				j++;
			}
		}
		else if (ring [i][0] == '1')
		{
			board[(i - 1)][0][0] = '4';
		}
	}
}

void H2_put1_4(char ***board, char **ring, int n)
{
	int i;
	int j;
	int k;

	i = 1;
	while (i < (n + 2 - 1))
	{
		if (ring[(n + 2 - 1)][i] == '4')
		{
			j = 1;
			k = 3;
			while (j <= 4)
			{
				board[(k)][(i - 1)][0] = j + '0';
				j++;
				k--;
			}
		}
		else if (ring [0][i] == '1')
		{
			board[3][(i - 1)][0] = '4';
		}
	}
}

void H1_put1_4(char ***board, char **ring, int n)
{
	int i;
	int j;

	i = 1;
	while (i < (n + 2 - 1))
	{
		if (ring[0][i] == '4')
		{
			j = 1;
			while (j <= 4)
			{
				board[(j - 1)][(i - 1)][0] = j + '0';
				j++;
			}
		}
		else if (ring [0][i] == '1')
		{
			board[0][(i - 1)][0] = '4';
		}
	}
}

void check1(char ***board, char **ring, int n)
{
	H1_put1_4(board, ring, n);
	H2_put1_4(board, ring, n);
	V1_put1_4(board, ring, n);
	V2_put1_4(board, ring, n);
}
