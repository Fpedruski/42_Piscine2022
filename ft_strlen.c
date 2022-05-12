/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Switcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:19:07 by Switcher          #+#    #+#             */
/*   Updated: 2022/05/12 10:34:35 by Switcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_strlen(char *ch)
{
	int i;
	i = 0;

	while(ch[i] != '\0')
	{
		if(ch[i])
		{
			i++;
		}


	}	
	printf("%d Lenght \n", i);
	return(i);	
}

int main()
{
	char var1[] = "Hello there";

	char var2[] = "Hey";

	ft_strlen(var1);
	ft_strlen(var2);

}
