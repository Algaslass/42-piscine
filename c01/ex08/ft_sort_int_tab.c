/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 17:08:43 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/25 10:52:40 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	while (size >= 0)
	{
		x = 0;
		while (x < size - 1)
		{
			if (tab[x] > tab[x + 1])
			{
				swap = tab[x];
				tab[x] = tab[x + 1];
				tab[x + 1] = swap;
			}
			x++;
		}
		size--;
	}
}

int	main(void)
{
	int	tab[5] = {9, 3, -7, 5, 2};
	int	size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
