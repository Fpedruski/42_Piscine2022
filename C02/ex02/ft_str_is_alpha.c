/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 21:16:52 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/12 22:10:21 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
// CHECK IF THERE IS NO STRING!!
// CHECK IF THERE IS NO STRING!!
// CHECK IF THERE IS NO STRING!!
// CHECK IF THERE IS NO STRING!!
int ft_str_is_alpha(char *str)
{
	int i;
	char x = 'x';
	int finish = 0;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 48 &&  str[i] <= 57)
		{
			printf("contain a number");
			x = 'x';
		}
		 else
		{
			printf("does not contain");
			x = 'z';
		}
		if (x == 'x')
		{
			finish = 1;
		}
			i++;
	}
	return (finish);
}

int main()
{
	char *str = " ";
	ft_str_is_alpha(str);
}
