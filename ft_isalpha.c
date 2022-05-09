/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 15:59:52 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/09 16:56:18 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_isalpha(char *str)
{
	
	int i;
	i = 0;

	while(str[i] != '\0')
	{
		if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
		{
			i++;
		}else
			{
				return(0);
			}

	}

	return (0);
}
/*
int main()
{
	char str[] = "Hel1lo";

	ft_isalpha(str);
}
*/
