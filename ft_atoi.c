/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: sannealbreghs <sannealbreghs@student.co      +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/11/22 12:43:18 by sannealbreg    #+#    #+#                */
/*   Updated: 2019/11/27 13:46:26 by sannealbreg   ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	check_atoi(unsigned long int result, const char *str, int neg)
{
	while (*str != '\0' && *str > 47 && *str < 58)
	{
		if (result >= 922337203685477580 && (*str - '0') < '7' && (neg == 1))
			return (-1);
		if (result >= 922337203685477580 && (*str - '0') < '8' && (neg == -1))
			return (0);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int				ft_atoi(const char *str)
{
	unsigned long int	result;
	int					neg;

	result = 0;
	neg = 1;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (*str == '+')
	{
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	if (*str == '-')
	{
		neg = -1;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	result = (check_atoi(result, str, neg));
	return (result * neg);
}
