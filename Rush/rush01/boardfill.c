/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boardfill.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 12:42:50 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:48:25 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void aleat(char ***board, int xyz[])
{
	int correcto;

	if (board[xyz[0]][xyz[1]][0] == '0')
	{
		correcto = 0;
		while (correcto == 0)
		{
			if (board[xyz[0]][xyz[1]][xyz[2]] != ' ')
			{
				board[xyz[0]][xyz[1]][xyz[0]] = board[xyz[0]][xyz[1]][xyz[2]];
				correcto = 1;
				xyz[2] = xyz[2] + 1;
				if (xyz[2] > 4)
					xyz[2] = 1;
			}
			else
				xyz[2] = xyz[2] - 1;
		}
	}
	else
	{
	xyz[2] = xyz[2] + 1;
	if (xyz[2] > 4)
		xyz[2] = 1;
	}
}
void boardfill(char ***board, int n, int *ptr_vuelta)
{
	int xyz[3];

	xyz[0] = 0;
	xyz[1] = 0;
	xyz[2] = *ptr_vuelta;
	while (xyz[0] < n)
	{
		while (xyz[1] < n)
		{
			while (xyz[2] < (n + 1))
			{
				aleat(board, xyz);
			}
			xyz[1] = xyz[1] + 1;
		}
		xyz[1] = 0;
		xyz[0] = xyz[0] + 1;
	}
	*ptr_vuelta = xyz[2];
}


