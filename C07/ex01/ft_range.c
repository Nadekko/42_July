/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 19:33:19 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/15 20:43:03 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*dest;

	if (min >= max)
		return (0);
	size = max - min;
	dest = (int *)malloc(size * sizeof(int));
	if (!dest)
		return (NULL);
	i = 0;
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int		main(void)
{
	int	min = 5;
	int	max = 10;
	int	*tab;
	int	i = 0;
	int	size = max - min;

	tab = ft_range(min, max);
	if (!tab)
	{
		printf("Erreur lors de l'allocation de memoire.\n");
		return (1);
	}
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
	free(tab);
	return (0);
}*/
