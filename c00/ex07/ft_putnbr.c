/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 22:06:03 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/15 01:16:20 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_putnbr(int numb)
{
	if (numb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (numb >= 0 && numb < 10)
	{
		ft_putchar(numb + '0');
	}
	else if (numb < 0)
	{
		ft_putchar('-');
		ft_putnbr(numb * (-1));
	}
	else
	{
		ft_putnbr(numb / 10);
		ft_putnbr(numb % 10);
	}
}
