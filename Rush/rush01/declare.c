/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   declare.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 14:50:10 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 15:41:58 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void game(char ***board, char **ring, int n);

int err_mem1(char*** A)
{
	if (A == NULL)
    {
        write(1, "Error, no hay espacio en memoria\n", 33);
        return (1);
    }
	return (0);
}

int err_mem2(char** A)
{
	if (A == NULL)
    {
        write(1, "Error, no hay espacio en memoria\n", 33);
        return (1);
    }
	return (0);
}

int err_mem3(char* A)
{
	if (A == NULL)
	{
		write(1, "Error, no hay espacio en memoria\n", 33);
		return (1);
	}
	return (0);
}

int declare(int n, char **ring)
{
	int i;
	int j;

	char*** A = (char***)malloc(n * sizeof(char**));
 	if (err_mem1(A) == 1)
		return (1);
	i = 0;
    while (i < n)
    {
        A[i] = (char**)malloc(n * sizeof(char*));
        if (err_mem2(A[i]) == 1)
			return (1);
		j = 0;
        while (j < n)
        {
            A[i][j] = (char*)malloc((n + 1) * sizeof(char));
            if (err_mem3(A[i][j]) == 1)
				return (1);
			j++;
        }
		i++;
    }
	game(A, ring, n);
	return(0);
}
