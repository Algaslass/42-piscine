/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 13:47:52 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/26 21:03:57 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	x;

	x = 2;
	if (nb < 2)
		return (0);
	while (x <= nb / 2)
	{
		if (nb % x == 0)
			return (0);
		x++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_is_prime(13));
// 	return 0;
// }