/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/18 22:32:43 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/19 00:50:43 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	j;

	j = 0;
	while (str[j] != '\0')
	{
		if (str[j] > 'A' && str[j] < 'Z')
			str[j] += 32;
		j++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (str[0] > 'a' && str[0] < 'z')
			str[0] -= 32;
		if ((str[i] == ' ' || str[i] == '+' || str[i] == '-')
			|| (str[i] >= '!' && str[i] <= '/'))
		{
			if (str[i + 1] > 'a' && str[i + 1] < 'z')
			str[i + 1] -= 32;
		}
	i++;
	}
	return (str);
}
