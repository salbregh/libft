/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sannealbreghs <sannealbreghs@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 13:01:00 by sannealbreg    #+#    #+#                */
/*   Updated: 2019/12/10 12:39:01 by sannealbreg   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	d;
	size_t	s;

	i = 0;
	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize == 0)
		return (s);
	if (d >= dstsize)
		return (s + dstsize);
	while (i < (dstsize - d - 1) && (src[i] != '\0'))
	{
		dst[d + i] = src[i];
		i++;
	}
	dst[i + d] = '\0';
	return (d + s);
}
