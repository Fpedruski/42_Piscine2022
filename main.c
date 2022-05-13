/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/10 16:42:31 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/13 23:41:38 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	NEWLINE()
{
	return (printf("\n"));
}

int	main()
{
	int		var1 = '1';
	int		var2 = 'a';
	int		var3 = 'Z';
	int		var4 = 'A';
	int		var5 = 128;
	char	str1[] = "Hello there";
	char	str2[] = "Hey";
	
	const 	char *str = " Try not. Do, or do not. There is no try.";
  	char 	target = 'T';
	const 	char *result = str;
	const char *result2 = str;
	const char *result3 = str;
	
	/* FT_ISALPHA */
	printf("\t\t/////// FT_ISALPHA ///////\n");
	printf("Return zero if the characte test false and non-zero if the character test is true\n");

	printf("ISALPHA():\n");
	printf("\t%c return %d |", var1, isalpha(var1));
	printf("%c return %d |", var2, isalpha(var2));
	printf("%c return %d |", var3, isalpha(var3));
	printf("%c return %d \n",var4, isalpha(var4));
		NEWLINE();	
	printf("FT_ISALPHA():\n");
	printf("\t%c return %d |", var1, ft_isalpha(var1));
	printf("%c return %d |", var2, ft_isalpha(var2));
	printf("%c return %d |", var3, ft_isalpha(var3));
	printf("%c return %d \n", var4, ft_isalpha(var4));
		NEWLINE();	
	/*FT_ISDIGIT*/
	printf("\t\t/////// FT_ISDIGIT ///////\n");
	printf("ISDIGIT():\n");
	printf("Var1 Is %s a Digit: %d\n", (isdigit(var1) ? "": "not"), var1);
	printf("Var2 Is %s a Digit: %d\n", (isdigit(var2) ? "": "not"), var2);
		NEWLINE();
	printf("FT_ISDIGIT()\n");
	printf("Var1 Is %s a Digit:%d\n", (ft_isdigit(var1) ? "":"not"), var1);	
	printf("Var2 Is %s a Digit:%d\n", (ft_isdigit(var2) ? "":"not"), var2);
		NEWLINE();
	/*FT_STRLEN*/
	printf("\t\t/////// FT_STRLEN ///////\n");
	printf("STRLEN():\n");
	printf("Lenght: %lu \n",strlen(str1));
	printf("Lenght: %lu \n",strlen(str2));
		NEWLINE();
	printf("FT_STRLEN():\n");
	printf("Lenght: %lu \n",ft_strlen(str1));
	printf("Lenght: %lu \n",ft_strlen(str2));
		NEWLINE();
	/*FT_ISASCII*/
	printf("Char %c is %s an ASCII\n", var2 ,(ft_isascii(var2) ? "" : "not ") );
	printf("Char %c is %s an ASCII\n", var5 ,(ft_isascii(var5) ? "" : "not ") );
		NEWLINE();
	/*FT_TOUPPER*/
	printf("\t\t/////// FT_TOUPPER///////\n");
	printf("TOUPPER()\n");
	printf("%c: %c\n", var1, toupper(var1));
	printf("%c: %c\n", var2, toupper(var2));
		NEWLINE();
	printf("FT_TOLOWER()\n");
	printf("%c: %c\n", var1, ft_toupper(var1));
	printf("%c: %c\n", var2, ft_toupper(var2));
		NEWLINE();
	/*FT_TOLOWER*/
	printf("\t\t/////// FT_TOLOWER ///////\n");
	printf("TOLOWER()\n");
	printf("%c: %c\n", var4, tolower(var4));
	printf("%c: %c\n", var2, tolower(var2));
		NEWLINE();
	printf("FT_TOLOWER()\n");
	printf("%c: %c\n", var4, ft_tolower(var4));
	printf("%c: %c\n", var2, ft_tolower(var2));
		NEWLINE();
	/*FT_ISALNUM*/
	printf("\t\t/////// ISALNUM ///////\n");
	printf("ISALNUM()\n");
	printf("Is ALPHANUMERIC? %c: %d\n", var1, isalnum(var1));
	printf("\t\t/////// FT_ISALNUM ///////\n");
	printf("FT_ISALNUM()\n");
	printf("Is ALPHANUMERIC? %c: %d\n", var1, ft_isalnum(var1));
	printf("Is ALPHANUMERIC? %c: %d\n", var2, ft_isalnum(var2));
	printf("Is ALPHANUMERIC? %c: %d\n", var5, ft_isalnum(var5));
		NEWLINE();
	printf("%d", ft_isprint(var1));
		NEWLINE();
	printf("\t\t/////// FT_STRCHR///////\n");
	printf("STRHR()\n");
	while((result = strchr(result, target)) != NULL)
	{
    	printf("Found '%c' starting at '%s'\n", target, strchr(result, target));
		++result;	
	}
		NEWLINE();
	printf("FT_STRHR()\n");
	while((result2 = ft_strchr(result2, target)) != NULL)
	{
		printf("Found '%c', starting at '%s'\n", target, ft_strchr(result2, target));
		++result2;
	}
		NEWLINE();
	while((result3 = ft_strrchr(result3, target)) != NULL)
	{
		printf("Found '%c', starting at '%s'\n", target, ft_strrchr(result3, target));
		++result3;
	}
}
