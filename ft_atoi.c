/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 09:09:50 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 09:15:19 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	res;

	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	res = 0;
	while (ft_isdigit(*str))
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}
