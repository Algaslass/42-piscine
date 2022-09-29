/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:38:27 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/15 00:49:58 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	nombr;

	nombr = '0';
	while (nombr <= '9')
	{
		write(1, &nombr, 1);
		nombr++;
	}
}
