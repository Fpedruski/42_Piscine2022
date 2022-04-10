/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 21:02:22 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/09 22:28:13 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{	
	int	i;
	int	o;
	int	temp;

	i = 0;
	o = size;
	while (i != size)
	{
		temp = tab[i];
		while (o != 0)
		{
			tab[o] = tab[i];
			tab[o] = temp;
			o -= 1;
		}
		i++;
	}
}
/*
int	main(void)
{
	int size;
	size = 5;
	int tab[] = {1,2,3,4,5}; 
	ft_rev_int_tab(tab ,size);
}

*/
