/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:01:16 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/26 19:31:39 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	factor;

	factor = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		factor = factor * nb;
		nb--;
	}
	return (factor);
}

// #include <stdio.h>

// int main()
// {
// 	printf("%d", ft_iterative_factorial(5));
// 	return 0;
// }