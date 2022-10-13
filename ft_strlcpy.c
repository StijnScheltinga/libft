/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:59:28 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/11 17:45:35 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcpy(char	*dst, const char *src, size_t dstsize)
{
	unsigned long	i;	

	i = 0;
	if (dstsize > 0)
	{
		while (i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return ((size_t) ft_strlen(src));
}

// int main()
// {
// 	char dst[17] = "";
// 	// char src[] = "siii";
// 	printf("mijne: %lu", ft_strlcpy(dst, "", 4));
// 	printf("echte: %lu", strlcpy(dst, "", 4));
// }
