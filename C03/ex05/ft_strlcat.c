/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:20:10 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/10 17:28:54 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;

	i = 0;
	j = 0;
	k = 0;
	while (dest[i])
		i++;
	while (src[j])
		j++;
	if (size <= i)
		j = j + size;
	else
		j = j + i;
	while (src[k] && (i + 1) < size)
	{
		dest[i++] = src[k++];
	}
	dest[i] = '\0';
	return (j);
}
/*#include <stdio.h>
int   main()
{
        char    s1[100] = "Hello";
        char    *s2 = " World!";
        unsigned int    size = 7;

        printf("%u\n", ft_strlcat(s1, s2, size));
        printf("%s\n", s1);
        return 0;
}*/
