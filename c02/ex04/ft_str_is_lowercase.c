/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:21:43 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 13:03:09 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'a' && str[x] <= 'z'))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_str_is_lowercase("azertfhgfgfg"));
// 	printf("\n%d", ft_str_is_lowercase("azertfhgfgfg"));
// 	printf("\n%d", ft_str_is_lowercase("-_123azerStf"));
// 	printf("\n%d\n", ft_str_is_lowercase(""));
// }
