/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 15:34:27 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/02 17:12:27 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_appel(char i, char j, char k)
{
	if (i != j && j != k && i != k)
	{
		ft_putchar(i);
		ft_putchar(j);
		ft_putchar(k);
	}
	if (!(i == '7' && j == '8' && k == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j +1;
			while (k <= '9')
			{
				ft_appel(i, j, k);
				k++;
			}
		j++;
		}
	i++;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
