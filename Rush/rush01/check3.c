/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:52:16 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:46:53 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void sq1(char ***board, char **ring, int i)
{
	if ((ring[0][2]) == (ring[2][0]))
	{
		if (ring[0][2] == '2')
			while (++i <= 4)
				board[1][1][i] = i + '0';
		else if (ring[0][2] == '3')
			while (++i <= 3)
				board[1][1][i] = i + '0';
		else
			while (++i <= 3)
				board[1][1][i] = i + '0';
	}
	else
	{
		if ((ring[0][2] == '1') || (ring[2][0] == '1'))
			if ((ring[0][2] == '3') || (ring[2][0] == '3'))
				while (++i <= 3)
					board[1][1][i] = i + '0';
			else
				while (++i <= 4)
					board[1][1][i] = i + '0';
		else
			while (++i <= 3)
				board[1][1][i] = i + '0';
	}
}

void sq2(char ***board, char **ring, int i)
{
	if ((ring[0][3]) == (ring[2][5]))
	{
		if (ring[0][3] == '2')
			while (++i <= 4)
				board[1][2][i] = i + '0';
		else if (ring[0][3] == '3')
			while (++i <= 3)
				board[1][2][i] = i + '0';
		else
			while (++i <= 3)
				board[1][2][i] = i + '0';
	}
	else
	{
		if ((ring[0][3] == '1') || (ring[2][5] == '1'))
			if ((ring[0][3] == '3') || (ring[2][5] == '3'))
				while (++i <= 3)
					board[1][2][i] = i + '0';
			else
				while (++i <= 4)
					board[1][2][i] = i + '0';
		else
			while (++i <= 3)
				board[1][2][i] = i + '0';
	}

}

void sq3(char ***board, char **ring, int i)
{
	if ((ring[5][2]) == (ring[3][0]))
	{
		if (ring[5][2] == '2')
			while (++i <= 4)
				board[2][1][i] = i + '0';
		else if (ring[5][2] == '3')
			while (++i <= 3)
				board[2][1][i] = i + '0';
		else
			while (++i <= 3)
				board[2][1][i] = i + '0';
	}
	else
	{
		if ((ring[5][2] == '1') || (ring[3][0] == '1'))
			if ((ring[5][2] == '3') || (ring[3][0] == '3'))
				while (++i <= 3)
					board[2][1][i] = i + '0';
			else
				while (++i <= 4)
					board[2][1][i] = i + '0';
		else
			while (++i <= 3)
				board[2][1][i] = i + '0';
	}
}

void sq4(char ***board, char **ring, int i)
{
	if ((ring[5][3]) == (ring[3][5]))
	{
		if (ring[5][3] == '2')
			while (++i <= 4)
				board[2][2][i] = i + '0';
		else if (ring[5][3] == '3')
			while (++i <= 3)
				board[2][2][i] = i + '0';
		else
			while (++i <= 3)
				board[2][2][i] = i + '0';
	}
	else
	{
		if ((ring[5][3] == '1') || (ring[3][5] == '1'))
			if ((ring[5][3] == '3') || (ring[3][5] == '3'))
				while (++i <= 3)
					board[2][2][i] = i + '0';
			else
				while (++i <= 4)
					board[2][2][i] = i + '0';
		else
			while (++i <= 3)
				board[2][2][i] = i + '0';
	}
}

void square(char ***board, char **ring, int sqtype, int xy[])
{
	int i;

	i = 0;
	if (board[xy[0]][xy[1]][0] == 0)
	{
		if(sqtype == 1)
			sq1(board, ring, i);
		else if (sqtype == 2)
			sq2(board, ring, i);
		else if (sqtype == 3)
			sq3(board, ring, i);
		else if (sqtype == 4)
			sq4(board, ring, i);
	}
}
