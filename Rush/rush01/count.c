/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 15:53:17 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 18:36:33 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void count_n(char **argv)
{
	int contador;

	contador = 0;
	while (argv[1][contador] != '\0')
	{
		if ((contador % 2) == 1)
		{
			if (argv[1][contador] != ' ')
			{
				write(1, "Error\n", 6);
			}
		}
		else if ((argv[1][contador] < '1') || (argv[1][contador] > '4'))
		{
			write(1, "Error\n", 6);
		}
		contador++;
	}
	if (contador != 31)
	{
		write(1, "Error\n", 6);
	}
}

void count(int argc, char **argv)
{
	int n;
	
	n = 0;
	if (argc != 2)
	{
		write(1, "Error\n", 6);
	}
	else
	{
		printf("HOLIWI");
		count_n(argv);
	}
}
