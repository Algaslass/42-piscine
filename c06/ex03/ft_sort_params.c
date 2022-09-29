/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 21:19:23 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/26 18:47:35 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	x;

	x = 0;
	while ((s1[x] != '\0' || s2[x] != '\0') && s1[x] == s2[x])
	{
		x += 1;
	}
	return (s1[x] - s2[x]);
}

void	ft_sort_params(int argc, char *argv[])
{
	char	*temp;
	int		x;

	x = 1;
	while (x < argc - 1)
	{
		if (ft_strcmp(argv[x], argv[x + 1]) > 0)
		{
			temp = argv[x];
			argv[x] = argv[x + 1];
			argv[x + 1] = temp;
			x = 0;
		}
		x++;
	}
}

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	x;

	x = 1;
	ft_sort_params(argc, argv);
	while (x < argc)
		ft_putstr(argv[x++]);
	return (0);
}
