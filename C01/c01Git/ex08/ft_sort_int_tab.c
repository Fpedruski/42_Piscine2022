/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 14:14:45 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/10 20:31:59 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>  

void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (j < size - i - 1 )
		{
			if (tab[j] < tab[j + 1])
			{
				int temp;
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}

			j++;
		}
		i++;
	}

	int x;	
	x = 0;
	while (x < size)
	{
	
		printf("%d", tab[x]);
		x++;
	}
}

int main()
{
	int size;
	int	tab[] = {5,3,2,1,4};
	size = 5;

	ft_sort_int_tab(tab, size);
	
}
