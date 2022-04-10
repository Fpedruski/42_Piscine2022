/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 18:32:18 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/10 19:24:53 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void combn(int start, int n, const char* s)
{
  if(n==0){
      printf("%s\n", s);
      return;
  }
	int i;
	i = start;
  while (i < 9)
  {
      char s2[11]; //divisor?
	  printf("%s", s2); 
      sprintf(s2, "%s%i",s, i); // printea divisor e module?
      combn(i+1,n-1, s2);
	++i;  
  }
}

void ft_print_combn(int n)
{
    if (n>=1 && n<=10)
      combn(0,n,"");
}

int main (int argc, char* args[])
{
    ft_print_combn(2);
}
