/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 15:47:10 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 16:16:13 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_itoa_getlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		i;
	int		neg;
	char	*str;

	neg = 0;
	if (n < 0)
		neg = 1;
	i = ft_itoa_getlen(n);
	str = malloc(i + 1);
	if (str == NULL)
		return (NULL);
	str[i] = '\0';
	while (i > 0)
	{
		i--;
		if (neg)
			str[i] = '0' - n % 10;
		else
			str[i] = '0' + n % 10;
		n /= 10;
	}
	if (neg)
		*str = '-';
	return (str);
}
