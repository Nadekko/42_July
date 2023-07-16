/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adjennad <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 16:32:56 by adjennad          #+#    #+#             */
/*   Updated: 2023/07/05 14:28:04 by adjennad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

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

/*int	main(void)
{
	char	dest[] = "Epic fail";
	char	src[] = "Success";
	printf("Must all be same (3 lines):\n%s\n%s\n%s\n", 
		src, ft_strcpy(dest, src), dest);
	char	dest1[] = "";
	char	src1[] = "";
	ft_strcpy(dest1, src1);
}*/
