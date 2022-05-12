/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:42:31 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/12 14:52:31 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
# include "libft.h"

int	main()
{

	/* FT_ISALPHA */
	int var1 = '1';
	int var2 = '0x80';
	int var3 = 'a';
	int var4 = '2';

	char str1[] = "Hello there";
	char str2[] = "Hey";

	printf("%c return %d |", var1, ft_isalpha(var1));
	printf("%c return %d |", var2, ft_isalpha(var2));
	printf("%c return %d |", var3, ft_isalpha(var3));
	printf("%c return %d \n", var4, ft_isalpha(var4));
	
	/*FT_ISDIGIT*/

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

	// ft_isdigit
	printf("This is your function:\n");
	printf("Var1 Is %s a Digit:%d\n", (var1 ? "":"not"), var1);	
	printf("Var2 Is %s a Digit:%d\n", (var2 ? "":"not"), var2);
	return 0;	

	/*FT_ISALPHA*/
	
	/*FT_STRLEN*/
	
	ft_strlen(str1);
	ft_strlen(str2);
	
	/*FT_ISASCII*/

	printf("Char %c is %s an ASCII\n", ft_isascii(var1) ,(ft_isascii(var1) ? "" : "not ") );
	printf("Char %c is %s an ASCII\n", ft_isascii(var2) ,(ft_isascii(var2) ? "" : "not ") );
	printf("Char %c is %s an ASCII\n", ft_isascii(var3) ,(ft_isascii(var3) ? "" : "not ") );


}
