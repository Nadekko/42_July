/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/06 15:00:41 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/06 17:07:05 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] > 64 && str[i] < 91)
			str[i] = str[i] + 32;
		i++;
	}
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (!((str[i - 1] > 47 && str[i - 1] < 58)
				|| (str[i -1] > 64 && str[i - 1] < 91)
				|| (str[i - 1] > 96 && str[i - 1] < 123)))
			if (str[i] > 96 && str[i] < 123)
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	renvoi[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	printf("%s", ft_strcapitalize(renvoi));

}*/
