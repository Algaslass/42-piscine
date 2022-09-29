/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_solution.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:17:54 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:56:09 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	ft_putchar(char c);
void	ft_putnbr(int nb);

void	display_boxes(int tab[4][4])  // this functions prints out our output once all our boxes have been placed
{
	int pos;
	int pos_2;
	pos = -1;
	while (++pos < 4)
	{
		pos_2 = -1;
		while (++pos_2 < 4)
		{
			ft_putnbr(tab[pos][pos_2]);
			ft_putchar(' ');
		}
		ft_putchar('\n');
	}
}