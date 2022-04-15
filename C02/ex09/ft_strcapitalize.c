/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 18:18:30 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/14 15:59:54 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] > 'A' && str[j] < 'Z')
			str[j] += 32;
	j++;
	}		
	while (str[i] != '0')
	{
		if (str[0] > 'a' && str[0] < 'z')
			str[0] -= 32;
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			if (str[i + 1] > 'a' && str[i + 1] < 'z')
				str[i + 1] -= 32;
		i++;
	}
	return (str);
}
