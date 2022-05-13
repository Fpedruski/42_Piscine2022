/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Switcher <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 21:47:28 by Switcher          #+#    #+#             */
/*   Updated: 2022/05/12 22:34:05 by Switcher         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>


char	*ft_strchr(const char *str, int ch)
{

	char *result;
		
	result = (char *)str;
	while(*result != ch)
	{
		if(*result == '\0')
		{
			return (0);
		}
		result++;
	}
	return (result);
}


int main(void)
{
  const char *str = " Try not. Do, or do not. There is no try.";
  char target = 'T';
  const char *result = str;

  while((result = ft_strchr(result, target)) != NULL) {
    printf("Found '%c' starting at '%s'\n", target, result);
    ++result; // Increment result, otherwise we'll find target at the same location
  }
}
