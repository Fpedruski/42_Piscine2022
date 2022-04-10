/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:47:32 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/10 19:28:48 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
	printf("%d", *nbr);
}
/*
int	main()
{
	int	var;
	int	*nbr;

	nbr = &var;
	printf("%p \n", nbr);
	printf("%p", &var);
	ft_ft(nbr);
}
*/
