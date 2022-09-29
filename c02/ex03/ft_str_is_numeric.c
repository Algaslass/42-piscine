/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 00:37:25 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 13:03:04 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 48 && str[x] <= 57))
		{
			return (0);
		}
		x++;
	}
	return (1);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d", ft_str_is_numeric("1234567567"));
// 	printf("\n%d", ft_str_is_numeric("123456kj7567"));
// 	printf("\n%d", ft_str_is_numeric("-_ldkfjcgsfdgf,"));
// 	printf("\n%d\n", ft_str_is_numeric(""));
// 	return (0);
// }
