/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 13:21:10 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/25 00:38:29 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
		x++;
	return (x);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	res;

	x = 0;
	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (dest_size < size)
		res = dest_size + src_size;
	else
		res = src_size + size;
	if (size == 0)
		return (res);
	while (src[x] != '\0' && dest_size + x < size - 1)
	{
		dest[dest_size + x] = src[x];
		x++;
	}
	dest[dest_size + x] = '\0';
	return (res);
}

#include <stdio.h>

int	main()
{
	char src[] = "ever Give Up";
	char dest[] = "Never ";
	printf("%s\n", dest);
	printf("%d\n", ft_strlcat(dest, src, 19));
}
