/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfhexapointer.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseragio <eseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 14:10:24 by eseragio          #+#    #+#             */
/*   Updated: 2026/01/22 20:17:22 by eseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_hexaconvertion(unsigned long int nb)
{
	int	len;

	len = 0;
	if (nb < 16)
	{
		len++;
		write(1, &"0123456789abcdef"[nb], 1);
	}
	if (nb >= 16)
	{
		len += ft_hexaconvertion(nb / 16);
		len += ft_hexaconvertion(nb % 16);
	}
	return (len);
}

int	ft_printfhexapointer(void *ptr)
{
	int	result;

	result = 0;
	if (ptr == NULL)
		return (ft_putstr_fd("(nil)", 1));
	else
		result += ft_putstr_fd("0x", 1);
	result += ft_hexaconvertion((unsigned long int) ptr);
	return (result);
}
/*
int	main (void)
{
        int n = 255;
        int nb = 45;
        int num = 10;

	char *ptr = NULL;

       // printf("\nreturn: %d\n", ft_hexaconvertion(n));

        //printf("\nreturn: %d\n", ft_hexaconvertion(nb));

        //printf("\nreturn: %d\n", ft_hexaconvertion(num));
	printf("\n\n%p \n\n", &ptr);

        printf("\nreturn: %d\n", ft_printfhexapointer(&n));

        printf("\nreturn: %d\n", ft_printfhexapointer(&nb));

        printf("\nreturn: %d\n", ft_printfhexapointer(&num));
}
*/
