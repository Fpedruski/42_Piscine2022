/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:07:09 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/12 19:45:43 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include	<string.h>
# include	<stdio.h>
# include	<stdlib.h>
# include	<unistd.h>
# include	<ctype.h>

int	ft_isalpha(int i);
int	ft_isdigit(int i);
int ft_isalnum(int ch);

int ft_toupper(int c);
int ft_tolower(int c);

int	ft_isascii(char c);

size_t	ft_strlen(char *ch);
#endif
