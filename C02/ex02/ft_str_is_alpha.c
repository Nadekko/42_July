/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 12:55:30 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/05 14:30:17 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= 'a' && str[i] <= 'z'))
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
	ft_str_is_alpha("")?"OK":"Fail",
	ft_str_is_alpha("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")
		?"OK":"Fail",
	!ft_str_is_alpha("1")?"OK":"Fail",
	!ft_str_is_alpha(" ")?"OK":"Fail",
	!ft_str_is_alpha("\\")?"OK":"Fail",
	!ft_str_is_alpha("\n")?"OK":"Fail");
}*/
