/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 14:03:30 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/01 16:17:32 by adjennad         ###   ########.fr       */
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
			if ((pos_x == 0 && pos_y == 0) || (pos_x == x - 1
					&& pos_y == y - 1 && x > 1 && y > 1))
				ft_putchar('/');
			else if ((pos_x == x - 1 && pos_y == 0)
				|| (pos_y == y - 1 && pos_x == 0))
				ft_putchar('\\');
			else if (pos_x == 0 || pos_y == 0
				|| pos_x == x - 1 || pos_y == y - 1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			pos_x++;
		}
		ft_putchar('\n');
		pos_y++;
	}
}
