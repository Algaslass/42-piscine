/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:02:32 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 13:02:54 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (dest);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char src[] = "Hello";
// 	char dest[] = "World1";
// 	char dest1[] = "Earth2";
// 	printf("%s", ft_strncpy(dest, src, 3));
// 	printf("\n%s", strncpy(dest1, src, 3));
// 	printf("\n%s", ft_strncpy(dest, src, 5));
// 	printf("\n%s", strncpy(dest1, src, 5));
// 	return (0);
// }
