/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 17:05:25 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/11 17:39:22 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <string.h>

int		ft_isalnum(int a);
int		ft_isalpha(int a);
int		ft_isascii(int a);
int		ft_isdigit(int a);
int		ft_isprint(int a);
void	*ft_memset(void *str, char a, size_t len);
int		ft_strlen(const char *str);
int		ft_tolower(int a);
int		ft_toupper(int a);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *str, int ch);
void	*ft_memmove(void	*dest, const void	*src, size_t n);
size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize);
char	*ft_strrchr(const char *str, int ch);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

#endif
