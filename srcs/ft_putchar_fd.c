/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseragio <eseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:05:42 by eseragio          #+#    #+#             */
/*   Updated: 2026/01/22 17:17:55 by eseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putchar_fd(char c, int fd)
{
	return (write (fd, &c, 1), 1);
}
/*
int	main(void)
{
	int	fd;

	fd = open("text.txt", O_WRONLY);
	ft_putchar_fd('d', fd);
	close(fd);
}
*/
