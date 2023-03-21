/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thdoenle <thdoenle@student.42mulhouse.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/03 17:09:50 by thdoenle          #+#    #+#             */
/*   Updated: 2022/11/03 17:24:15 by thdoenle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_fd_recur(int n, int fd)
{
	if (n < -9 || n > 9)
	{
		ft_putnbr_fd_recur(n / 10, fd);
	}
	if (n < 0)
		ft_putchar_fd('0' - (n % 10), fd);
	else
		ft_putchar_fd('0' + (n % 10), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_putnbr_fd_recur(n, fd);
}
