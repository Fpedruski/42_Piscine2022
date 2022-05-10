/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:42:31 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/10 17:02:47 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

int	main()
{

	/* IS_ALPHA */
	int var1 = '1';
	int var2 = 'A';
	int var3 = 'a';
	int var4 = '2';

	printf("%c return %d |", var1, ft_isalpha(var1));
	printf("%c return %d |", var2, ft_isalpha(var2));
	printf("%c return %d |", var3, ft_isalpha(var3));
	printf("%c return %d \n", var4, ft_isalpha(var4));
	
	/*IS_DIGIT*/

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

	/*IS_ALPHA*/
	
	return (0);
}
