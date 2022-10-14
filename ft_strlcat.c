/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 15:20:35 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/14 14:51:10 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	int				d_len;
	int				s_len;
	unsigned long	i;

	d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	while (src[i])
	{
		dst[d_len + i] = src[i];
		i++;
		if (dstsize == (i + d_len))
			break ;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}

int main()
{
	printf("%lu", strlcat("hallo", "hoi", 5));
}