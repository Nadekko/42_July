/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 21:08:41 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/15 23:43:40 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*dest;
	int	size;
	if (min >= max)
	{
		*range = NULL;
		return(0);
	}
	size = max - min;
	*range = (int *)malloc(range * sizeof(int));
	if (*range == NULL)
		return (-1);
	i = 0;
	while (i < range)
	{
		(* range)[i] = min + i;
		i++;
	}
	return (size);
}

int main(void)
{
	int *tab;
	int min = 5;
	int max = 10;
	int size;

	size = ft_ultimate_range(&tab, min, max);
	if (tab == NULL)
	{
		printf("Error: min is greater than or equal to max.\n");
		return 1;
	}
	if (size == -1)
	{
		printf("Error: Memory allocation failed.\n");
		return 1;
	}
	printf("Generated array: ");
	for (int i = 0; i < size; i++)
	{
		printf("%d ", tab[i]);
	}
	free (tab);
	return (0);
}
