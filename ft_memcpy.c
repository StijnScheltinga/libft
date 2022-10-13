/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sschelti <sschelti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 12:20:17 by sschelti          #+#    #+#             */
/*   Updated: 2022/10/07 13:58:42 by sschelti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*d;
	char	*s;
	int		i;

	d = (char *) dest;
	s = (char *) src;
	i = 0;
	if (dest == 0 && src == 0)
		return (dest);
	while (i < (int) n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
