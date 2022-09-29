/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 08:22:50 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 13:03:21 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (!(str[x] >= 32 && str[x] <= 126))
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
// 	printf("%d\n", ft_str_is_printable("AZZERTYUaqsd?ZE%"));
// 	printf("%d\n", ft_str_is_printable("\n\t\v\f"));
// 	printf("%d\n", ft_str_is_printable(""));
// 	return (0);
// }
