/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felsanto <felsanto@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/09 17:07:09 by felsanto          #+#    #+#             */
/*   Updated: 2022/06/02 16:26:49 by felsanto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_isalpha(int i);
int		ft_isdigit(int i);
int		ft_isalnum(int i);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *ch);
size_t	ft_strlcat(char *dst, char *src, size_t size); //CHECK 

char	*ft_strchr(const char *str, int ch);
char	*ft_strrchr(const char *str, int ch);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strdup(const char *s1);

void	ft_bzero(void *str, size_t n);
void	*ft_memset(void *dest, int ch, size_t i);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *src, int ch, size_t count);
void	*ft_memmove(void *dest, const void *src, size_t len); //CHECK
void	*ft_calloc(size_t count, size_t size);

#endif
