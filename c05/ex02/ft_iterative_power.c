/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:17:00 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/27 08:45:25 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power != 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_iterative_power(10, 3));
// }