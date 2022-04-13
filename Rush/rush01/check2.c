/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 11:52:34 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:45:25 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void square(char ***board, char **ring, int sqtype, int xy[]);

void updown(char ***board, char **ring, int xy[])
{	
	if (board[xy[0]][xy[1]][0] == '0')
	{		
		if (ring[xy[0]][(xy[1] + 1)] == 2)
		{
			board[xy[0]][xy[1]][1] = '1';
			board[xy[0]][xy[1]][2] = '2';
			board[xy[0]][xy[1]][3] = '3';
		}
		else if (ring[xy[0]][(xy[1] + 1)] == 3)
		{
			board[xy[0]][xy[1]][1] = '1';
			board[xy[0]][xy[1]][2] = '2';
		}	
	}
}

void leftright(char ***board, char **ring, int xy[])
{	
	if (board[xy[0]][xy[1]][0] == '0')
	{		
		if (ring[(xy[0] + 1)][xy[1]] == 2)
		{
			board[xy[0]][xy[1]][1] = '1';
			board[xy[0]][xy[1]][2] = '2';
			board[xy[0]][xy[1]][3] = '3';
		}
		else if (ring[(xy[0] + 1)][xy[1]] == 3)
		{
			board[xy[0]][xy[1]][1] = '1';
			board[xy[0]][xy[1]][2] = '2';
		}	
	}
}

void check2(char ***board, char **ring, int n)
{
	int xy[2];
	
	xy[0] = 0;
	xy[1] = 1;
	while (xy[0] < n)
	{
		while (xy[1] < n)
		{
			if ((xy[0] == 0) || (xy[0] == 3))
				updown(board, ring, xy);
			else if ((xy[1] == 0) || (xy[1] == 3))
				leftright(board, ring, xy);
			else
				if ((xy[0] == 1) && (xy[1] == 1))
					square(board, ring, 1, xy);
				else if ((xy[0] == 1) && (xy[1] == 2))
					square(board, ring, 2, xy);
				else if ((xy[0] == 2) && (xy[1] == 1))
					square(board, ring, 3, xy);
				else if ((xy[0] == 2) && (xy[1] == 2))
					square(board, ring, 4, xy);
		}
	}
}
