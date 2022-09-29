/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_row.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofadahun <ofadahun@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 15:11:25 by ofadahun          #+#    #+#             */
/*   Updated: 2022/09/25 18:14:50 by ofadahun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	row_right(int map[4][4], int position, int clues[16])
{
	int	i;
	int	max = 0;
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
		if (clues[12 + position / 4] != count)
			return (1);
	}
	return (0);
}