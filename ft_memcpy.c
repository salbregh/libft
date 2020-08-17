/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sannealbreghs <sannealbreghs@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 12:49:56 by sannealbreg    #+#    #+#                */
/*   Updated: 2019/12/10 12:22:07 by sannealbreg   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	size_t			i;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	if (n == 0 || (cdst == 0 && csrc == 0))
		return (dst);
	while (i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}
