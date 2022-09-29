/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   l_row.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 16:38:53 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:24:48 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_left(int map[4][4], int position, int clues[16])
{
	int	pos;
	int	max;
	int	count;

	pos = -1;
	max = 0;
	count = 0;
	if (position % 4 == 3)
	{
		while (++pos < 4)
		{
			if (map[position / 4][pos] > max)
			{
				max = map[position / 4][pos];
				count++;
			}
		}
		if (clues[8 + position / 4] != count)
		{
			return(1);
		}
	}
	return (0);
}