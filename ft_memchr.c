/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:57:56 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/11 19:28:05 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// SYNOPSIS
//      #include <string.h>

//      void *
//      memchr(const void *s, int c, size_t n);

// DESCRIPTION
//      The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.

// RETURN VALUES
//      The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n bytes.

#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    char            *str = (char *) s;
    unsigned long   i;

       

}

int main()
{
    char    *str = "hallo"
    printf("%s\n", ft_memchr(str, a, 3))
    printf("%s", memchr(str, a, 3))
}