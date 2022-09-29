/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:19:20 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/26 18:49:27 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;
	int	y;

	x = argc - 1;
	if (argc > 0)
	{
		while (x > 0)
		{
			y = 0;
			while (argv [x][y] != '\0')
			{
				write(1, &argv[x][y], 1);
				y++;
			}
			write(1, "\n", 1);
			x--;
		}
	}
	return (0);
}
