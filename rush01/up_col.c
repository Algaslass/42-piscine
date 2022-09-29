/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   up_col.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 18:10:20 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:29:59 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	col_up(int map[4][4], int position, int clues[16])
{
	int	i;
	int	max;
	int	count;

	i = 4;
	max = 0;
	count = 0;
	if (position % 4 == 3)
	{
		while (--i >= 0)
		{
			if (map[position / 4][i] > max)
			{
				max = map[position / 4][i];
				count++;
			}
		}
		if (clues[0 + position / 4] != count)
			return (1);
	}
	return (0);
}