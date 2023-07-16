/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 13:34:08 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/09 15:28:23 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*ptr != '\0')
		ptr++;
	while (*src != '\0')
	{
		*ptr = *src;
		src++;
		ptr++;
	}
	*ptr = '\0';
	return (dest);
}
/*#include <stdio.h>

int	main(void)
{
	char str1[20] = "Hello";
	char str2[] = " World!";

	ft_strcat(str1, str2);
	printf("Concatenated string: %s\n", str1);
	return 0;
}*/
