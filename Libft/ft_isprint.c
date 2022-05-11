/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Switcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 21:06:03 by Switcher          #+#    #+#             */
/*   Updated: 2022/05/11 20:33:05 by Switcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdio.h>
# include <ctype.h>


int ft_isprint(int ch)
{
	return (ch >= 32 && ch <= 126);
}

int main()
{

	char var1 = 'x';
	char var2 = 'z';
	char var3 = ' ';
	char var4 = '\xa0';


	
	printf("------------ isprint ----------\n");

	printf("%d |", isprint(var1));
	printf("%d |", isprint(var2));	
	printf("%d |", isprint(var3));
	printf("%d |", isprint(var4));


	printf("\n------------ ft_isprint ----------\n");
	
	printf("%d |", ft_isprint(var1));
	printf("%d |", ft_isprint(var2));
	printf("%d |", ft_isprint(var3));
	printf("%d |", ft_isprint(var4));



}
