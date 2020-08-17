/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: salbregh <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/26 08:09:47 by salbregh       #+#    #+#                */
/*   Updated: 2019/11/27 13:56:22 by sannealbreg   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_begin(const char *s1, char const *set)
{
	int		instr;
	int		inset;

	instr = 0;
	inset = 0;
	while (s1[instr] != '\0' && set[inset] != '\0')
	{
		if (s1[instr] == set[inset])
		{
			instr++;
			inset = 0;
		}
		else
			inset++;
	}
	return (instr);
}

static int		ft_end(const char *s1, char const *set)
{
	int		instr;
	int		inset;

	instr = ft_strlen(s1) - 1;
	inset = 0;
	while (instr > 0 && set[inset] != '\0')
	{
		if (s1[instr] == set[inset])
		{
			instr--;
			inset = 0;
		}
		else
			inset++;
	}
	return (instr);
}

char			*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		begin;
	int		end;
	char	*newstr;

	if (s1 == NULL)
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	begin = ft_begin(s1, set);
	end = ft_end(s1, set);
	if (begin > end)
		return (ft_strdup(""));
	newstr = (char *)malloc(sizeof(char) * (end - begin + 2));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (begin <= end)
	{
		newstr[i] = s1[begin];
		i++;
		begin++;
	}
	newstr[i] = '\0';
	return (newstr);
}
