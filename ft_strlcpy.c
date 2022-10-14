/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:59:28 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/14 14:46:52 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char	*dst, const char *src, size_t size)
{
	unsigned long	i;	

	i = 0;
	if (!dst || size < 0)
		return (0);
	if (size == 0)	
		return ((size_t) ft_strlen(src));
	if (size > 0)
	{
		while (i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
	}
	dst[i] = '\0';
	return ((size_t) ft_strlen(src));
}
