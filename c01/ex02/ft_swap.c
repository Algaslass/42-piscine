/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 04:40:06 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/15 04:48:37 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *x, int *y)
{
	int	tempor;

	tempor = *x;
	*x = *y;
	*y = tempor;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 42;
// 	y = 24;
// 	ft_swap(&x, &y);
// 	printf("%d\n", x);
// 	printf("%d\n", y);
// }
