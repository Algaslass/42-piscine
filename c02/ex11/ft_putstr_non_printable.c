/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 02:19:21 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/20 18:57:09 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_char_is_printable(char c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (ft_char_is_printable(str[x]) == 1)
			ft_putchar(str[x]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str[x] / 16]);
			ft_putchar("0123456789abcdef"[str[x] % 16]);
		}
		x++;
	}
}

// int	main(void)
// {
// 	ft_putstr_non_printable("Coucou\ntu vas bien ?");
// 	ft_putchar('\n');
// 	ft_putstr_non_printable("Coucou tu vas bie\t\v\0n");
// 	ft_putchar('\n');
// 	ft_putstr_non_printable("");
// 	return (0);
// }
