/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseragio <eseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 21:07:35 by eseragio          #+#    #+#             */
/*   Updated: 2026/01/22 20:11:50 by eseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_fd(int n, int fd)
{
	int			len;
	long int	nb;

	nb = n;
	len = 0;
	if (nb < 0)
	{
		len += ft_putchar_fd('-', fd);
		nb *= -1;
	}
	if (nb > 9)
		len += ft_putnbr_fd(nb / 10, fd);
	len += ft_putchar_fd(nb % 10 + '0', fd);
	return (len);
}
/*
int	main(void)
{
	int fd;
	fd = open("arquivo.txt", O_WRONLY);
	ft_putnbr_fd(42, fd);
	close(fd);
}
*/
