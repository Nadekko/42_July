/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/05 14:08:17 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/08 10:56:06 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		i++;
		else
			return (0);
	}
	return (1);
}

/*int	main(void)
{
	printf("%s\n%s\n%s\n%s\n%s\n%s\n",
	ft_str_is_uppercase("")?"OK":"Fail",
	!ft_str_is_uppercase("ABCDEFGHIJKLMNOPQRSTUVWXZabcdefghijklmnopqrstuvwxyz")
		?"OK":"Fail",
	!ft_str_is_uppercase("0123456789")?"OK":"Fail",
	!ft_str_is_uppercase(" ")?"OK":"Fail",
	!ft_str_is_uppercase("\\")?"OK":"Fail",
	!ft_str_is_uppercase("\n")?"OK":"Fail");
}*/
