/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:47:58 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/27 10:59:00 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	x;

	x = 1;
	while (x * x <= nb && nb > 0)
	{
		if (x * x == nb)
			return (x);
		else if (x >= 46341)
			return (0);
		x++;
	}
	return (0);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_sqrt(2147488281));
// 	return 0;
// }
