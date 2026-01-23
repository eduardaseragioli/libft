/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eseragio <eseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 11:03:01 by eseragio          #+#    #+#             */
/*   Updated: 2026/01/22 20:26:19 by eseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//flag to choose which str will be freed (1 = s1, 2 = s2 3 = both)
char	*ft_strjoin(char *s1, char *s2, int flag_free)
{
	size_t	i;
	size_t	j;
	char	*newstr;

	i = -1;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	newstr = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (newstr == NULL)
		return (free(s1), NULL);
	while (s1[++i])
		newstr[i] = s1[i];
	while (s2[j])
		newstr[i++] = s2[j++];
	newstr[i] = '\0';
	if (flag_free - 2 >= 0)
	{
		flag_free -= 2;
		free(s2);
	}
	if (flag_free == 1)
		free(s1);
	return (newstr);
}
/*
#include<stdio.h>
int	main(void)
{
	char s1[] = "duda";
	char s2[] = " seragioli";
	char *new;
	new = ft_strjoin(s1, s2);
	printf("%s\n", new);


	char ss1[] = "";
	char *ne;
	ne = ft_strjoin(ss1, s2);
	printf("Se s1 for vazia: %s\n", ne);
	
	char ss2[] = "";
	char *n;
	n = ft_strjoin(ss1, ss2);
	printf("Se s1 e s2 forem vazias: %s\n", n);
}
*/
