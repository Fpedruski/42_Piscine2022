/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 10:21:31 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/19 13:32:01 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int res;
	int sign;
	int i;
	
	res = 0;
	i = 0;
	sign = 1;

	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' \
		|| str[i] == '\f' || str[i] == '\n' || str[i] == '\r')
			i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return ((int)(sign * res));
}

/*
int main()
{
	printf("%d\n", ft_atoi("-123"));
	printf("%d\n", atoi("-123"));
}
*/
