/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akitty <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/04 16:43:19 by akitty            #+#    #+#             */
/*   Updated: 2021/10/04 16:43:21 by akitty           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
#include <stdlib.h>

#include <stdio.h> // DELETE IT
#include <ctype.h> // DELETE IT
#include <string.h> // DELETE IT

int		ft_isalpha(char c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_strlen(char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *dest, int c, size_t n);
void	*ft_memcpy(void *dest, void *src, size_t n);
void	*ft_memccpy(void *dest, void *src, int c, size_t n);
void	*ft_memmove(void *dest, void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlcpy(char *dest, char *src, size_t n);
int		ft_toupper(int c);
int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);

int	ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t n);


#endif

