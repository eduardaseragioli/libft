/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfdecimal.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseragio <eseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:42:55 by eseragio          #+#    #+#             */
/*   Updated: 2026/01/22 19:48:36 by eseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_printfdecimal(unsigned int nb)
{
	int	len;

	len = 0;
	if (nb >= 10)
		len += ft_printfdecimal(nb / 10);
	len += ft_putchar_fd((nb % 10) + '0', 1);
	return (len);
}
/*
int main(void)
{
	int n = 255;
	
	printf("\n result: %d\n", ft_printfdecimal(n));
}
*/
