/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: grebrune <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 20:32:45 by grebrune          #+#    #+#             */
/*   Updated: 2023/09/15 12:34:40 by grebrune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putbnr_fd(int n, int fd)
{
	if (n < 0)
	{
		n = n * -1;
		write(fd, "-", 1);
	}
	if (n == -2147483648)
	{
		write(fd, "2147483648", 10);
	}
	else if (n < 10)
		ft_putchar(n + 48, fd);
	else
	{
		ft_putbnr_fd(n / 10, fd);
		ft_putbnr_fd(n % 10, fd);
	}
}
/*
int	main(void)
{
	ft_putnr_fd(-2147483648);
}*/
