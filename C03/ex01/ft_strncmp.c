/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/09 17:43:47 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/09 17:43:51 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n > 0 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*s1 - *s2);
}
/*#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void) {
    char str1[] = "Bonjour";
    char str2[] = "Bonsoir";
    int result = ft_strncmp(str1, str2, 6);

    if (result == 0) {
        printf("Les deux chaînes sont égales jusqu'à la longueur spécifiée.\n");
    } else if (result < 0) {
        printf("La première chaîne est inférieure à la seconde.\n");
    } else {
        printf("La première chaîne est supérieure à la seconde.\n");
    }

    return 0;
}*/
