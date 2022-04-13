/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 16:57:46 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 18:29:37 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int err_mem2(char** A);

int err_mem3(char* A);

void ring_fill3(int n, char **argv, char **ring, int xy[])
{
	int i;

	i = 0;
	while(xy[0] <= (n - 2))
	{
		if ((argv[1][i] >= 1) && (argv[1][i] <= 9))
		{
			ring[xy[0]][xy[1]] = argv[1][i];
			i++;
			xy[0] = xy[0] + 1;
		}
		else
		{
			i++;
		}
	}
}

void ring_fill2(int n, char **argv, char **ring, int xy[])
{
	int i;

	i = 0;
	while(xy[1] <= (n - 2))
	{
		if ((argv[1][i] >= '1') && (argv[1][i] <= '9'))
		{
			ring[xy[0]][xy[1]] = argv[1][i];
			i++;
			xy[1] = xy[1] + 1;
		}
		else
		{
			i++;
		}
	}
}

void ring_fill(int n, char **argv, char **ring)
{
	int xy[2];
	
	xy[0] = 0;
	xy[1] = 1;
	ring_fill2(n, argv, ring, xy);
	xy[0] = n + 2 - 1;
	xy[1] = 1;
	ring_fill2(n, argv, ring, xy);
	xy[0] = 1;
	xy[1] = 0;
	ring_fill3(n, argv, ring, xy);
	xy[0] = 1;
	xy[1] = n + 2 - 1;
	ring_fill3(n, argv, ring, xy);
	
}	

char **setup(int n, char **argv)
{
	int x;
	int i;

	x = n + 2;
	char** ring = (char**)malloc(x * sizeof(char*));
	if(err_mem2(ring) == 1)
		return (ring);
	i = 0;
	while (i < n)
	{
		ring[i] = (char*)malloc(x * sizeof(char));
		if(err_mem3(ring[i]) == 1)
			return (ring);
		i++;
	}
	ring_fill(n, argv, ring);
	return (ring);
}
