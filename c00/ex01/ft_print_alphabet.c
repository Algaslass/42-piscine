/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halgabit <halgabit@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 12:03:00 by halgabit          #+#    #+#             */
/*   Updated: 2022/09/18 17:14:52 by halgabit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alphab;

	alphab = 'a';
	while (alphab <= 'z')
	{
		write(1, &alphab, 1);
		alphab++;
	}
}

int main()
{
	
}