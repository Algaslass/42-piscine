/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 02:15:54 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 19:46:49 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = 0;
	y = 0;
	while (src[x] != '\0')
		x++;
	if (size != 0)
	{
		while (src[y] != '\0' && y < (size - 1))
		{
			dest[y] = src[y];
			y++;
		}
		dest[y] = '\0';
	}
	return (x);
}

#include <stdio.h>

int    main(void)
{
    char src[] = "World";
    char dest[] = "Hello";
    printf("%d | %s\n", ft_strlcpy(dest, src, 6), dest);
    return (0);
}