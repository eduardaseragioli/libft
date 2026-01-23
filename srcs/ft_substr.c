/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseragio <eseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 10:18:03 by eseragio          #+#    #+#             */
/*   Updated: 2026/01/22 17:03:28 by eseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	len_str;
	char	*sub_str;

	len_str = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= len_str)
		return (ft_calloc(1, sizeof(char)));
	if (len > len_str - start)
		len = len_str - start;
	sub_str = ft_calloc(len + 1, sizeof(char));
	if (sub_str == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub_str[i] = s[start + i];
		i++;
	}
	sub_str[i] = '\0';
	return (sub_str);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "paralelepipedo";
	char	*result;
	char	*new;
	char	st[] = "";
		char *res;

	result = ft_substr(str, 3, 4);
	printf("%s\n", result);
	new = ft_substr(str, 20, 4);
	printf("se start for maior que o tamanho de s: %s\n", new);
	result = ft_substr(st, 3, 4);
		printf("se s for vazia, retorna NULL: %s\n", result);
		res = ft_substr(str, 6, 4);
		printf("%s\n", res);
}
*/
