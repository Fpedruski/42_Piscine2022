/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogonzale <ogonzale@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:45:49 by ogonzale          #+#    #+#             */
/*   Updated: 2022/04/03 10:02:16 by ogonzale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_print_combn(int n);

int	main(void)
{
	int	n;
	
	n = 9;
	if ((n > 0) && (n < 10))
		ft_print_combn(n);
	else
		printf("Not a valid input. Choose 0 < n < 10");
}
