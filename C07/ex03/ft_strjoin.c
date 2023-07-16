/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 23:40:03 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/16 04:15:05 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_final_len(char **strs, int size, int sep)
{
	int	len;
	int	i;

	i = 0;
	len = 0;
	while (i < size)
	{
		len += ft_strlen(strs[i]);
		len += sep;
		i++;
	}
	len -= sep;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		len;
	int		i;
	char	*dest;
	char	*d;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	len = ft_final_len(strs, size, ft_strlen(sep));
	dest = (char *)malloc((len + 1) * sizeof(char));
	d = dest;
	if (!d)
		return (0);
	i = 0;
	while (i < size)
	{
		ft_strcpy(d, strs[i]);
		d += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(d, sep);
			d += ft_strlen(sep);
		}
		i++;
	}
	return (dest);
}

/*int	main(void)
{
	char	**strs;
	char	*sep;
	char	*result;
	int		size;

	size = 3;
	strs = (char **)malloc(3 * sizeof(char *));
	strs[0] = (char *)malloc(sizeof(char) * 5 + 1);
	strs[1] = (char *)malloc(sizeof(char) * 7 + 1);
	strs[2] = (char *)malloc(sizeof(char) * 14 + 1);
	ft_strcpy(strs[0], "Hello");
	ft_strcpy(strs[1], "friend,");
	ft_strcpy(strs[2], "you are awesome");
	sep = " ";
	result = ft_strjoin(size, strs, sep);
	printf("%s$\n", result);
}*/
