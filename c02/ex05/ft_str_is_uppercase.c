/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 01:36:57 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 13:03:14 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 'A' && str[x] <= 'Z'))
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
// 	printf("%d\n", ft_str_is_uppercase("AZERTYUIUYT"));
// 	printf("%d\n", ft_str_is_uppercase("AZERTYUIUaYT"));
// 	printf("%d\n", ft_str_is_uppercase("-_1344TYaUIU67"));
// 	printf("%d\n", ft_str_is_uppercase(""));
// 	return (0);
// }
