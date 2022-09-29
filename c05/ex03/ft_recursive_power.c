/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:23:50 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/26 19:32:22 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 0;
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	result = nb * ft_recursive_power(nb, (power - 1));
	return (result);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_recursive_power(10, 3));
// }