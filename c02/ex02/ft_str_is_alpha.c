/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:17:16 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 13:03:00 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z')
			|| (str[x] >= 'a' && str[x] <= 'z'))
			x++;
		else
			return (0);
	}
	return (1);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d", ft_str_is_alpha("abcdehhfdfkd"));
// 	printf("\n%d", ft_str_is_alpha("abc1dehhfdfkd"));
// 	printf("\n%d", ft_str_is_alpha("-_123456fgg67"));
// 	printf("\n%d\n", ft_str_is_alpha(""));
// 	return (0);
// }
