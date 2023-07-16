/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 10:49:16 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/13 19:23:19 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	result;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	i = 1;
	result = 1;
	while (nb >= i)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
#include <stdio.h>

int	main()
{
	int result = ft_iterative_factorial(-4);
	printf("%d", result);
}
*/
