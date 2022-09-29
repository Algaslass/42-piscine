/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 18:16:33 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/24 14:13:42 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	x;

	if (n == 0)
		return (0);
	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && x < n - 1)
	{
		if (s1[x] != s2[x])
			return (s1[x] - s2[x]);
		x++;
	}
	return (s1[x] - s2[x]);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d\n", ft_strncmp("goodvibeS", "goodvi", 9));
// 	return (0);
// }
