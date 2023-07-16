/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:43:15 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/10 15:57:11 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*dest_start;

	dest_start = dest;
	while (*dest)
		dest++;
	while (*src && nb > 0)
	{
		*dest = *src;
		dest++;
		src++;
		nb --;
	}
	*dest = '\0';
	return (dest_start);
}
/*#include <stdio.h>
int main() 
{
    char dest[20] = "Hello, ";
    char src[] = "world!";
    size_t nb = 13;

    ft_strncat(dest, src, nb);
    printf("dest: %s\n", dest);

    return 0;
}*/
