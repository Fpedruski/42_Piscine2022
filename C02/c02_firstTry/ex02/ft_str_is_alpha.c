/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:16:52 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/16 21:27:51 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
// CHECK IF THERE IS NO STRING!!
// CHECK IF THERE IS NO STRING!!
// CHECK IF THERE IS NO STRING!!
// CHECK IF THERE IS NO STRING!!
int	ft_str_is_alpha(char *str)
{
	int	i;
	int	boolean;

	i = 0;
	boolean = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'z')
		{
			boolean = 1;
		}
		else
		{
			boolean = 0;
			return (0);
		}
		i++;
	}
	return (boolean);
}
