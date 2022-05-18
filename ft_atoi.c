/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:21:31 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/18 21:32:58 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	int res;
	int sign;
	int i;

	i = 0;
	sign = 1;

	while (str[i] == 32 || str[i] == '\t' || str[i] == '\v' \
		|| str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
		{
			i++;
		}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign = -1;
		}else if (str[i] == '+')
		{
			sign = 1;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (sign * res);
}

/*
int main()
{
	printf("%d\n", ft_atoi("-123"));
	printf("%d\n", atoi("-123"));
}
*/
