/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 22:11:55 by felsanto          #+#    #+#             */
/*   Updated: 2022/04/15 23:21:34 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strcmp(char *s1, char *s2)
{
	if (*s1 < *s2)
		return -1;

	if (*s1 > *s2)
	   return 1;
	
	if (*s1 == '\0')	
		return 0;
		
	return ft_strcmp (s1 + 1, s2 + 1);
}

int main ()
{
	char *s1;
	char *s2;

	s1 = "Hello";
	s2 = "Wella";

	ft_strcmp(s1, s2);
}
