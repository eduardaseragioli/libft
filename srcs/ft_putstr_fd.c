/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseragio <eseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 20:15:44 by eseragio          #+#    #+#             */
/*   Updated: 2026/01/22 20:14:14 by eseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (write(fd, "(null)", 6), 6);
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int fd;
	fd = open("arquivo.txt", O_WRONLY);
	ft_putstr_fd("duda", fd);
	close(fd);
}
*/
