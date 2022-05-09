/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:57:27 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/09 17:27:33 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>


int ft_isdigit(int *i)
{
	if(*i > 0 && *i < 128 )
	{
		printf("%d", *i);
		return (1);
	}
	return (0);
}

int main()
{
	int str;
	str = '1';
	ft_isdigit(&str);	
}
