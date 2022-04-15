/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 12:05:10 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/13 12:47:53 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	boolean;

	i = 0;
	boolean = 1;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 126)
		{
			boolean = 0;
			return (boolean);
		}
		else
		{
			boolean = 1;
		}
	i++;
	}
	return (boolean);
}
