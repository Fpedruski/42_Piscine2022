/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agalan-g <agalan-g@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 12:19:13 by agalan-g          #+#    #+#             */
/*   Updated: 2022/04/10 18:38:38 by agalan-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int declare(int n, char **ring);

int count(int argc, char **argv);

char **setup (int n, char **argv);

int main(int argc, char **argv)
{
	int n;

	n = 4;
	argc = 0;
	char **ring = setup(n, argv);
	if(declare(n, ring) == 1)
		return (0);
}
