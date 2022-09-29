/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 22:30:55 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/26 18:53:16 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	x;

	x = 0;
	if (argc > 0)
	{
		while (argv [0][x] != '\0')
		{
			write(1, &argv[0][x], 1);
			x++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
