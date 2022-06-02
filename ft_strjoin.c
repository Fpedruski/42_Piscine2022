/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto  <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 12:16:11 by Felsanto          #+#    #+#             */
/*   Updated: 2022/06/01 14:51:59 by Switcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h" 
	
char *
ft_strjoin (const char *s1, const char *s2)
{
  char *ptr;
  char *cpy;

  int str1;
  int str2;
  int str3;

  str1 = strlen (s1);
  str2 = strlen (s2);
  str3 = str1 + str2 + 1;
	// Default malloc syntax to allocate and return NULL
  ptr = (char *) malloc (str3);
  cpy = ptr;
  if (!cpy)
	return (NULL);

  if(s1 && s2)
  {
	// Use a cpy to return the correct position of pointer
	cpy = ptr;
  	while (*s1 != '\0')
  		*ptr++ = *s1++;
  	while (*s2 != '\0')
		*ptr++ = *s2++;
	*ptr = '\0';
  }

return (cpy);

}
/*
int
main ()
{
  char *str1 = "Hello";
  char *str2 = "There";

  printf ("%s", ft_strjoin (str1, str2));
}
*/
