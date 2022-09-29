/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 15:56:13 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/25 10:49:19 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	swap;

	x = 0;
	while (x < (size / 2))
	{
		swap = tab[x];
		tab[x] = tab[size -1 - x];
		tab[size -1 - x] = swap;
		x++;
	}
}

int	main(void)
{
	int	tab[5] = {0, 1, 2, 3, 4};
	int	size = 5;
	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d\n", tab[0], tab[1], tab[2], tab[3], tab[4]);
	return (0);
}
