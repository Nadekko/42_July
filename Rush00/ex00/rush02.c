/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:03:30 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/01 18:15:46 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	pos_x;
	int	pos_y;

	pos_y = 0;
	while (pos_y < y)
	{
		pos_x = 0;
		while (pos_x < x)
		{
			if (pos_y == 0 && (pos_x == 0 || pos_x == x - 1))
				ft_putchar('A');
			else if (pos_y == y - 1 && (pos_x == 0 || pos_x == x -1))
				ft_putchar('C');
			else if (pos_x == 0 || pos_y == 0
				|| pos_x == x - 1 || pos_y == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			pos_x++;
		}
		ft_putchar('\n');
		pos_y++;
	}
}
