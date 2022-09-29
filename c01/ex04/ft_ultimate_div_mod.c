/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 09:56:32 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/16 08:21:03 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *x, int *y)
{
	int	div;
	int	mod;

	div = *x / *y;
	mod = *x % *y;
	*x = div;
	*y = mod;
}

// int	main(void)
// {
// 	int	x;
// 	int	y;

// 	x = 15;
// 	y = 3;
// 	ft_ultimate_div_mod(&x, &y);
// 	printf("%d | %d", x, y);
// 	return (0);
// }
