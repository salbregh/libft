/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: sannealbreghs <sannealbreghs@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 12:58:34 by sannealbreg    #+#    #+#                */
/*   Updated: 2019/11/22 15:51:39 by sannealbreg   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = (char *)malloc(sizeof(*ptr) * (ft_strlen(s1) + 1));
	if (ptr == NULL)
		return (NULL);
	while (i <= ft_strlen(s1))
	{
		ptr[i] = s1[i];
		i++;
	}
	return ((char*)ptr);
}
