/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 16:57:27 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/10 12:59:25 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int i)
{
	
	return(i >= 48 && i <= 57);
	
}


int main()
{
	int var1 = 'H';
	int var2 = '1';

	// isdigit function
	printf("This is how isdigit function is:\n");
	if(isdigit(var1))
		printf("Var1 Is a Digit: %d\n", var1);
	else 
		printf("Var1 Not a Digit: %c\n", var1);
	
	if(isdigit(var2))
		printf("Var2 Is a Digit: %d\n", var2);
	else
		printf("Var2 Not a Digit: %c\n", var2);
	
	printf("\n\n");
	// Main function
	printf("This is your function:\n");
	if(ft_isdigit(var1))
		printf("Var1 Is a Digit:%d\n", var1);	
	else
		printf("Var1 Not a Digit: %c\n", var1);

	if(ft_isdigit(var2))
		printf("Var2 Is a Digit: %d\n", var2);
	else
		printf("Var2 Not a Digiti: %c\n", var2);

	return 0;
}
