/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:55:54 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/11 17:54:53 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	unsigned long	i;
	int				j;

	i = 0;
	j = 0;	
	if (*needle == '\0')
		return ((char *) haystack);
	while ((i < len) && haystack[i])
	{
		if (haystack[i] == needle[j])
		{
			if ((j + 1) == ft_strlen(needle))
				return ((char *) haystack + i - j);
			j++;
		}
		i++;
		if (haystack[i] != needle[j])
			j = 0;
	}
	return (NULL);
}

// int main()
// {
// const char arr1[] = "fhdshaakhallofkjhsfhallojksh";
// const char arr2[] = "hallo";
// printf("mijne: %s\n", ft_strnstr(arr1, arr2, -1));
// printf("echte: %s", strnstr(arr1, arr2, -1));
// }