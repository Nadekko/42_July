/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:06:43 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/10 17:27:45 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && to_find[j])
	{
		if (str[i] == to_find[j])
			j++;
		else
			j = 0;
		i++;
	}
	if (to_find[j] == '\0')
		return (&str[i - j]);
	else
		return (0);
}
/*#include <stdio.h>

int main()
{
    char str[] = "chateau";
    char to_find[] = "eau";
    
    char *result = ft_strstr(str, to_find);
    if (result != NULL)
    {
        printf("Substring found: %s\n", result);
    }
    else
    {
        printf("Substring not found.\n");
    }
    
    return 0;
}*/
