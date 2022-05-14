/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:07:09 by felsanto          #+#    #+#             */
/*   Updated: 2022/05/14 20:27:11 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <ctype.h>

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(char c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);


size_t	ft_strlen(const char *ch);

char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);

void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *dest, int ch, size_t i);
#endif
