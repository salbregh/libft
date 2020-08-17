/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: sannealbreghs <sannealbreghs@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 13:02:24 by sannealbreg    #+#    #+#                */
/*   Updated: 2019/11/22 16:21:31 by sannealbreg   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle[i] == '\0')
		return ((char *)haystack);
	while ((j < ft_strlen(haystack)) && (j < len))
	{
		while (haystack[i + j] == needle[i] && (i + j) < len)
		{
			if (needle[i + 1] == '\0')
				return ((char *)&haystack[j]);
			i++;
		}
		i = 0;
		j++;
	}
	return (0);
}
