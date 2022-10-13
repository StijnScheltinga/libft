/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:23:39 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/11 17:55:08 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memmove(void   *dest, const void   *src, size_t n)
{
	char	*d;
	char	*s;
	char	temp[n];
	int		i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (dest == '\0' && src == '\0')
		return (NULL);
	while (i < (int) n)
	{
		temp[i] = s[i];
		i++;
	}
	i = 0;
	while (i < (int) n)
	{
		d[i] = temp[i];
		i++;
	}
	return (dest);
}

// int main()
// {
// 	char    str1[] = "CLibraryFunction";
// 	char	str2[] = "ClibraryFunction";
// 	printf("mijne: %s \n", ft_memmove(&str1[0], &str1[7], 8));
// 	printf("echte: %s", memmove(&str2[0], &str2[7], 8));
// }
